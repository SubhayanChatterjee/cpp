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
struct node *pop(struct node *top)
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
    top=p->next;
    cout<<"after pop  operation the value of popped element "<<x<<endl;
    }
    return top;
}
void linklisttraversal(struct node *p)
{
    while(p!=NULL)
    {
        cout<<"the elements are "<<p->data<<endl;
        p=p->next;
    }
}
int main()
{
    struct node *top=NULL;
   top=push(top,32);
  top=push(top,46);
  top=push(top,3555);
    linklisttraversal(top);
    top=pop(top);
    linklisttraversal(top);
    return 0;
}
    


