// Online C++ compiler to run C++ program online
#include <iostream>
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
    //p=ptr;
    p->data=data;
    return p;
}
struct node *createnode1(struct node *ptr,int data)
{
    struct node *p=new node;
    p=ptr;
    p->data=data;
    return p;
}
void inorder(struct node *root)
{
    
    if(root!=NULL)
    {
       //cout<<root->data<<endl;
        inorder(root->left);
        // cout<<root->data<<endl;
       cout<<root->data;
        inorder(root->right);
    }
 //cout<<root->data<<endl;
}
bool isbst(struct node *root, struct node *prev)
{
    if (root == NULL)
        return true;
    
    // Check left subtree
    if (!isbst(root->left, prev))
        return false;
    
    // Check current node
    if (prev != NULL && root->data <= prev->data)
        return false;
    
    // Update prev to current node
    prev = root;
    
    // Check right subtree
    return isbst(root->right, prev);
}

bool isBST(struct node *root)
{
    struct node *prev = NULL;
    return isbst(root, prev);
}

int main() {
    // Write C++ code here
    struct node *root=new node;
    root=createnode1(root,5);
    struct node *a=createnode(3);
    struct node *b=createnode(6);
    struct node *c=createnode(1);
    struct node *d=createnode(4);
    root->left=a;
    root->right=b;
    a->left=c;
    a->right=d;
    b->left=NULL;
    b->right=NULL;
    c->left=d->left=NULL;
    d->right=c->right=NULL;
    //root->data=5;
    inorder(root);
    struct node *p=NULL;
    cout<<endl;
    bool y;
if(isbst(root,p))
cout<<"it is bst "<<endl;
    return 0;
}
