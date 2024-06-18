#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
int isempty(struct node *top)
{
    if(top==NULL)
    {
        cout<<"stack is in underflow condition"<<endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct node *top)
{
    struct node *p=new node;
    if(p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top,int x)
{
    if(isfull(top))
    {
         cout<<"stack is in overflow condition"<<endl;
    }
    else
    {
    struct node *p=new node;
    p->data=x;
    p->next=top;
    top=p;
    }
    return top;
}
int pop(struct node *top)
{
    if(isempty(top))
    {
        cout<<"stack is in underflow condition"<<endl;
        return 0;
    }
    else
    {
    struct node *p=top;
    int x=p->data;
    top->next=NULL;
    return x;
    }
}
void linklisttraversal(struct node *p)
{
    while(p!=NULL)
    {
        cout<<"the elements are "<<p->data<<endl;
        p=p->next;
    }
}
int stacktop(struct node *top)
{
    return top->data;
}
int stackbottom(struct node *first)
{
    return first->data;
}
int peek(int pos,struct node *first)
{
    if(pos < 0)  // Check for invalid position
        return -1; // Return some indicator for invalid position
    struct node *p=first;
   //struct node *p=top;
    for(int i=0;i<pos-1 && p != NULL;i++)
    {
        p=p->next;
       // cout<<p->data;
    }
    if(p != NULL)
    {
        return p->data;
    }
    else
    {
        return -1; // Return some indicator for position out of bounds
    }
}
int main()
{
    struct node *top=NULL;
   top=push(top,32);
    struct node *first=top;
  top=push(top,46);
  top=push(top,3555);
    linklisttraversal(top);
    cout<<"after pop  operation the value of popped element "<<pop(top)<<endl;
    cout<<"the topmosst value is "<<stacktop(top)<<endl;
    cout<<"the bottom value "<<stackbottom(first)<<endl;
    cout<<"the value you want to peek "<<peek(1,first)<<endl;
    return 0;
}
    


