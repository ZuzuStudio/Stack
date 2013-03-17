#include <iostream>
#include <fstream>
#include "stack.h"
using namespace std;

int main()
{
    Stack *Stack=NULL;


    ifstream fin ("test.in");
    ofstream fout("test.out");
    char zu;
    int num;
    fin >> zu;
    do
    {

        switch(zu)
        {
        case 'i':
            fin>> num;
            push(Stack, num);
            break;
        case 'o':
            if (is_empty(Stack))
                fout<<"Error ";
            else
                fout << pop(Stack) << ' ';
            break;
        }
        fin >> zu;

    }
    while(!fin.eof());
    if(is_empty(Stack))
        fout<<"Empty";
    else
        fout<<"Full ";
    clear_Stack(Stack);
    if(is_empty(Stack))
        fout<<"Empty";
    else
        fout<<"Full";

}




