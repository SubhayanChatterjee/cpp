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
         push(s,53);
         for(int i=0;i<=s->top;i++)
         {
         	cout<<"the elements are "<<s->arr[i]<<endl;
		 }
         cout<<"value after pop is "<<pop(s)<<endl;
    return 0;
}
