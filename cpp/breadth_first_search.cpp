#include<iostream>
using namespace std;
struct queue
{
	int *arr;
	int top;
	int rear;
	int size;
};
bool isfull(struct queue *r)
{
	if(r->top==r->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool isempty(struct queue *q)
{
	if(q->top == q->rear == -1)
	{
	return 1;	
	}
	else
	{
		return 0;
	}
}
void enqueue(struct queue *r,int value)
{
	if(isfull(r))
	{
		cout<<"not possible "<<endl;
	}
	else
	{
		r->top++;
		r->arr[r->top]=value;
	}
}
int dequeue(struct queue *r)
{
	int a=-1;
 if(isempty(r))
 {
 	cout<<"not possible because it is empty "<<endl;
	 }	
	 else
	 {
	 	r->rear++;
	 a=r->arr[r->rear];
	 }
	 return a;
}
void display(struct queue *q)
{
		
	for(int i=q->rear+1;i<=q->top;i++)
	{
		cout<<q->arr[i];
	}
}
int main()
{
	struct queue *q=new queue;
	q->size=7;
	q->arr=new int[q->size];
	q->top=q->rear=-1;
int visit[7]={0,0,0,0,0,0,0};
int arr[7][7]={
{0,1,1,1,0,0,0},{1,0,1,0,0,0,0},{1,1,0,1,1,0,0},{1,0,1,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}
};
int i=0;
cout<<i;
visit[i]=1;
enqueue(q,i);
while(isempty(q)==0)
{
	//int node=dequeue(q);
	for(int j=0;j<7;j++)
	{
			int node=dequeue(q);
		for(int j=0;j<7;j++)
		{
			if(arr[node][j]==1&&visit[j]==0)
			{
			
				cout<<j;
				visit[j]=1;
				enqueue(q,j);
			}
			
		}
	}
}

	return 0;
}
