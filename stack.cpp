#include <iostream>
#include <fstream>
#include "stack.h"
using namespace std;
bool is_empty(Stack *pStack)
{
    if (pStack==NULL)
        return true;
    else
        return false;
}

void push(Stack *&pStack,int info)
{
    Stack *tmp = new Stack;
    tmp->info=info;
    tmp->next=pStack;
    pStack=tmp;
}

int pop(Stack *&pStack)
{
    int zuzu=pStack->info;
    Stack *tmp=pStack;
    pStack=pStack->next;
    delete tmp;
    return zuzu;
}

void Show_all(Stack *pStack)
{
    Stack *tmp=pStack;
    while(tmp!=NULL)
    {
        cout<<tmp->info<< " ";
        tmp=tmp->next;
    }
}

void clear_Stack(Stack *&pStack)
{
    Stack *tmp;
    while(pStack!=NULL)
    {
        tmp=pStack;
        pStack=pStack->next;
        delete tmp;
    }
}
int on_top(Stack *pStack)
{
    return pStack->info;
}
