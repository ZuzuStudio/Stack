#ifndef STACK_H
#define STACK_H

struct Stack
{
    int info;
    Stack *next;
};
int on_top(Stack *pStack);
bool is_empty(Stack *pStack);
void push(Stack *&pStack,int info);
int pop(Stack *&pStack);
void Show_all(Stack *pStack);
void clear_Stack(Stack *&pStack);

#endif // STACK_INCLUDED
