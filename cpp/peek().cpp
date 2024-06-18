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
void push(struct stack *ptr,int val)
{
    if(isfull(ptr))
    {
        cout<<"stack is in overflow condition"<<" "<<val<<" "<<"cannot be pushed in stack"<<endl;
        
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        cout<<"stack is in underflow condition"<<endl;
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *sp,int i)
{
    int arrind=sp->top-i+1;
    if(arrind<0)
    {
        cout<<"not in a valid position"<<endl;
        return -1;
    }
    else
    {
        return sp->arr[arrind];
    }
}
int stacktop(struct stack *sp)
{
    return sp->arr[sp->top];
}
int stackbottom(struct stack *sp)
{
    return sp->arr[0];
}
int main()
{
    struct stack *s=new stack;
    s->size=6;
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
    push(s,56);
    push(s,66);
     push(s,60);
      push(s,96);
       push(s,65);
        push(s,62);
         push(s,52);
        // cout<<"value after pop is "<<pop(s)<<endl;
        for(int i=1;i<=s->top+1;i++)
        {
         cout<<"value at the position  "<<i<<" "<<peek(s,i)<<endl;
    }
      cout<<"the toppmost value is "<<stacktop(s)<<endl;
    cout<<"the bottom value is "<<stackbottom(s)<<endl;
    return 0;
}
