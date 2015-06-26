#ifndef PARSER
#define PARSER

#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
#include "qstring.h"

using namespace std;

typedef vector<string> code;
typedef vector<string> arglist;

struct CodeTemplate
{
    code lines;
    void LoadFromFile(char* path)
    {
        ifstream in(path,ios::in);
        string temp;
        while(!in.eof())
        {
            getline(in,temp);
            lines.push_back(temp);
        }
        in.close();
    }
};

struct Var;

class CodeBlock
{
public:
    int block_type;
    arglist args;
    vector<CodeBlock*> child;
    CodeBlock();
    ~CodeBlock();
    code getCode(arglist V);
};

void PushArguments(code &c, int block_type, arglist a);
void PushCode(code& c,code subc);
void SealCode(code& c);
void LoadTemplate(char * path);
void AddCodeBlock(CodeBlock* &c, int block_level, int block_type, arglist a);
bool isBetweenChars(char x, char l, char r);
string StrWordGet(string s, int number, char separator);
void StrWordDel(string &s, int number, char separator);
void AddCodeString(CodeBlock* &c, string s);
code Compile(CodeBlock* &c);
int StrToInt(string s);
void EasyRunExe(char* name, char* args);
void EasyCompile(char* CompilerPath, char* SourcePath);
void SaveCode(code c, const char* path);

#endif // PARSER

