#include<iostream>
using namespace std;
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *q)
{
    if(q->r==(q->r+1)%q->size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct queue *q)
{
    if(q->f == q->r ==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q,int val)
{
    if(isfull(q))
    {
        cout<<"queue is in overflow condition"<<endl;
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if(isempty(q))
    {
        cout<<"queue is in underflow condition"<<endl;
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}
void display(struct queue *q)
{
    for(int i=q->f+1;i<=q->r;i++)
    {
        cout<<"elements are "<<q->arr[i]<<endl;
    }
}
int main()
{
    struct queue *q=new queue;
    q->size=10;
    q->f=q->r=-1;
    q->arr=new int[q->size];
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
     display(q);
     cout<<"dequeue operation takes place"<<endl;
   int y=dequeue(q);
   cout<<"the value of dequeued element "<<y<<endl;
   display(q);
    return 0;
}
