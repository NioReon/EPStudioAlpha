#include "parser.h"

using namespace std;



vector<CodeTemplate> template_base;

struct Var
{
    string Name;
    string Value;
};

void PushArguments(code &c, int block_type, arglist a)
{
    int state = 0;
    int b,e;
    string ins_str;

    c = template_base[block_type].lines;
    vector<Var> var_table;

    for(unsigned int i = 0; i < a.size(); i++)
    {
        Var temp;
        temp.Value = a[i];
        temp.Name ="";
        var_table.push_back(temp);
    }

    for(unsigned int k = 0;k<c.size();k++)
        for(unsigned int i = 0;i<c[k].length();i++)
        {
            switch(state)
            {
            case 0 ://Начало новой переменной
                if(c[k][i]=='$')
                {
                    state = 1;
                    b = i;
                }
                break;
            case 1 ://Конец новой переменной
                if(c[k][i]=='$')
                {
                    state = 2;
                    e = i;
                }
                break;
            case 2 ://Поиск переменной в списке и подстановка аргумента
                ins_str = c[k].substr(b+1,e-b-1); //Копируем подстроку, заключенную в $...$
                c[k].erase(b,e-b+1); //Удаляем скопированную подстроку вместе с $...$
                i -= e-b; //Мы удалили e-b+1 символов,так что возвращаем счетчик назад на эту величину

                unsigned int j = 0;
                bool isAddV = false;//Если мы найдем переменную, то добавлять новую будет не надо
                for(j = 0; j < var_table.size()&&var_table[j].Name!=""; j++ )
                    if(var_table[j].Name == ins_str) //Если переменная с таким именем уже есть
                    {
                        c[k].insert(b,var_table[j].Value);//Вставляем аргумент в код
                        isAddV = true;
                        break;
                    }

                state = 0; //Возвращаемся в состояние поиска начала новой переменной

                if(isAddV)//Если мы найдем переменную, то добавлять новую будет не надо
                    break;
                //Если дошли сюда, то данной переменной в списке найдено не было

                if(j>var_table.size())//Если значение счетчика больше размера списка переменных
                    return;            //Возвращаемся, не хватило параметров
                //Если дошли сюда, то
                //теперь нужно добавить переменную в список и подставить значение

                var_table[j].Name = ins_str; //Регистрируем переменную
                c[k].insert(b,var_table[j].Value); //Вставляем аргумент в код

                break;
            }

        }
    return;
}

void PushCode(code& c,code subc)
{
    for(unsigned int i = 0; i < c.size(); i++) //Перебираем строки
    {
        if(c[i].find("#code#")!=string::npos)
        {
            //c.erase(c.begin()+i);
            c.insert (c.begin()+i,subc.begin(),subc.end());
            break;
        }
    }
}

void SealCode(code& c)
{
    for(unsigned int i = 0; i < c.size(); i++) //Перебираем строки
    {
        if(c[i].find("#code#")!=string::npos)
        {
            c.erase(c.begin()+i);
        }
    }
}

void LoadTemplate(char * path)
{
    CodeTemplate temp;
    temp.LoadFromFile(path);
    template_base.push_back(temp);
}

void AddCodeBlock(CodeBlock* &c, int block_level, int block_type, arglist a)
{
    CodeBlock* current = c;
    for(int i = 0; i < block_level; i++ )
        current = current->child[current->child.size()-1];//Проходим по уже построенному дереву,
                                                          //находя его левый край
    CodeBlock* temp = new CodeBlock;
    temp->args = a;
    temp->block_type = block_type;
    current->child.push_back(temp);
}

bool isBetweenChars(char x, char l, char r)
{
    if(x-l>=0 && r-x>=0)
        return true;
    else
        return false;
}

string StrWordGet(string s, int number, char separator) //Возвращает слово без сепаратора
{
    int state = 0, word_number = 0;
    int word_begin;
    s+=' ';
    for(unsigned int i = 0; i<s.length(); i++)
        switch(state)
        {
        case 0:
            if(s[i]!=separator)
            {
                state = 1;
                word_begin = i;
                word_number++;
            }
            break;
        case 1:
            if(s[i]==separator)
            {
                if(word_number == number)
                    state = 2;
                else
                    state = 0;
                i--;
            }
            break;
        case 2:
            return s.substr(word_begin,i-word_begin);
        }
    return "";
}

void StrWordDel(string &s, int number, char separator) //Удаляет слово с сепаратором
{
    int state = 0, word_number = 0;
    int word_begin;
    s+=' ';
    for(unsigned int i = 0; i<s.length(); i++)
        switch(state)
        {
        case 0:
            if(s[i]!=separator)
            {
                state = 1;
                word_begin = i;
                word_number++;
            }
            break;
        case 1:
            if(s[i]==separator)
            {
                if(word_number == number)
                    state = 2;
                else
                    state = 0;
                i--;
            }
            break;
        case 2:
            s.erase(word_begin,i-word_begin+1);
            s.erase(s.length()-1,1);
            return;
        }
    s.erase(s.length()-1,1);
    return;
}

void AddCodeString(CodeBlock* &c, string s)
{
    arglist ar;
    int block_level, block_type;
    s+=" ";
    block_type = StrToInt(StrWordGet(s,1,' '));
    StrWordDel(s,1,' ');
    block_level = StrToInt(StrWordGet(s,1,' '));
    StrWordDel(s,1,' ');
    int count = StrToInt(StrWordGet(s,1,' '));
    StrWordDel(s,1,' ');

    for(int i = 0; i<count; i++)
    {
        int bufflen = StrToInt(StrWordGet(s,1,' '));
        StrWordDel(s,1,' ');
        ar.push_back(s.substr(0,bufflen));
        s.erase(0,bufflen+1);
    }
    AddCodeBlock(c,block_level,block_type,ar);
}

code Compile(CodeBlock* &c)
{
    code result;
    PushArguments(result,c->block_type,c->args);     //Получаем код текущего элемента

    for(unsigned int i = 0; i < c->child.size(); i++)   //Для каждого подэлемента
    {
        PushCode(result,Compile(c->child[i]));         //Рекрсивно проходим по дереву
    }

    SealCode(result);   //Больше код в эту конструкцию вставляться не будет,
                        //поэтому удаляем все ненужные метки
    return result;
}

int StrToInt(string s)
{
    int result = 0;
    int degree = 1;
    for(int i = s.length()-1; i>=0; i--,degree*=10)
        result+=degree*(s[i]-'0');
    return result;
}

wchar_t *convertCharArrayToLPCWSTR(const char* charArray)
{
    wchar_t* wString=new wchar_t[4096];
    MultiByteToWideChar(CP_ACP, 0, charArray, -1, wString, 4096);
    return wString;
}

void EasyRunExe(char *path, char *args)
{
    char* s =(char*) malloc(1000);

    strcpy(s,path);
    strcat(s," ");
    strcat(s,args);
    strcat(s," &");

    system(s);

    free(s);
    return;
}
void EasyCompile(char* CompilerPath, char* SourcePath)
{
    char* s =(char*) malloc(1000);
    strcpy(s,SourcePath);
    strcat(s," -o ");
    strcat(s,SourcePath);
    strcat(s,".exe");
    EasyRunExe(CompilerPath,s);
    free(s);
    return;
}

void SaveCode(code c, char* path)
{
    ofstream out(path);
    for(unsigned int i = 0; i < c.size(); i++)
        out<<c[i]<<endl;
    out.close();
}

CodeBlock::CodeBlock()
{

}
CodeBlock::~CodeBlock()
{
    for(unsigned int i = 0; i<child.size(); i++)
    {
        child[i]->~CodeBlock();
    }
    child.empty();
}
code CodeBlock::getCode(arglist V)
{
    code result;
        //for(unsigned int i = 0; i<V.size(); i++)
        //{
        //    PushArguments(result,block_type,V);
        //}
    PushArguments(result,block_type,V);
    return result;
}
