#include<iostream>
using namespace std;
struct queue
{
    int data;
    //int f;
    //int r;
    //int *arr
    struct queue *next;
};
int isfull(struct queue *q)
{
    struct queue *n=new queue;
    if(n==NULL)
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
    if(q==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct queue *enqueue(struct queue *q,int val)
{
    
    if(isfull(q))
    {
        cout<<"queue is in overflow condition"<<endl;
    }
    else
    {
        struct queue *ptr=new queue;
        ptr->data=val;
        ptr->next=q;
        q=ptr;
        
    }
     return q;
}
struct queue *dequeue(struct queue *q)
{
    int a=-1;
    if(isempty(q))
    {
        cout<<"queue is in underflow condition "<<"the value is "<<a<<endl;
    }
    else
    {
    	if(q->next==NULL)
    	{
    	    a=q->data;
    	    delete q;
    	    q=NULL;
    	}
    	else
    	{
       struct queue *x=q;
       struct queue *r=q->next;
       while(r->next!=NULL)
       {
       	x=x->next;
       	r=r->next;
	   }
	   x->next=NULL;
       a=r->data;
      delete r;
    	}
    	
       cout<<"element is "<<a<<endl;
    }
    return q;
}
void display(struct queue *q)
{
    struct queue *w=q;
    while(w!=NULL)
    {
        cout<<"elements are "<<w->data<<endl;
        w=w->next;
    }
}
int main()
{
    struct queue *r=NULL;
    struct queue *f=NULL;
    r=enqueue(r,1);
    f=r;
 r=enqueue(r,2);
   r=enqueue(r,3);
   r=enqueue(r,4);
     display(r);
     cout<<"dequeue operation takes place"<<endl;
  r=dequeue(f);
  // cout<<"the value of dequeued element "<<y<<endl;
   display(r);
    return 0;
}

