#include<iostream>
using namespace std;
struct stack
{
    int size;
    int *arr;
    int top;
};
int isempty(struct stack *ptr)
{ 
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
     if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *s=new stack;
    s->size=80;
    s->arr=new int[s->size];
    s->top=-1;
    if(isempty(s))
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is full"<<endl;
    }
    return 0;
}
