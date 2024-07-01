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

struct node *insert(struct node *&root, int key)
{
    struct node *prev = NULL;
    struct node *current = root;

    // Traverse the tree to find the appropriate position
    while (current != NULL)
    {
        prev = current;
        if (key == current->data)
        {
            //return; // Key already exists in the tree
            cout<<"not possible"<<endl;
        }
        else if (key < current->data)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }

    // Create a new node
    struct node *newNode = createnode(key);

    // Insert the new node
    if (prev == NULL)
    {
        // Tree is empty, newNode is the root
        root = newNode;
    }
    else if (key < prev->data)
    {
        prev->left = newNode;
    }
    else
    {
        prev->right = newNode;
    }
    return root;
}

int main() {
    // Write C++ code here
    struct node *root=new node;
    root=createnode1(root,5);
    struct node *a=createnode(3);
    struct node *b=createnode(7);
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

root=insert(root,6);
inorder(root);
//cout<<root->right->left->data<<endl;
    return 0;
}
