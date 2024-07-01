#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createnode(int data)
{
	struct node *p=new node;
	p->data=data;
	p->right=NULL;
	p->left=NULL;
	return p;
}
void postordertraversal(struct node *root,struct node *my)
{
if(root!=NULL)
{
	
	postordertraversal(root->left,my);
	postordertraversal(root->right,my);
	cout<<root->data<<endl;
//	root=my;
	}	
}
int main()
{
	struct node *a=createnode(4);
	struct node *b=createnode(1);
	struct node *c=createnode(3);
	struct node *d=createnode(5);
	struct node *e=createnode(6);
	a->right=c;
	a->left=b;
	b->right=d;
	b->left=e;
	e->left=e->right=NULL;
	d->left=d->right=NULL;
	c->left=c->right=NULL;
	struct node *my=a->right;
	postordertraversal(a,my);
}
