#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void linklisttraversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        cout << "element are: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct node *insertafternode(struct node *head,struct node *prev,int data)
{
struct node *ptr=new node;
ptr->data=data;
ptr->next=prev->next;
prev->next=ptr;
    return head;
}

int main() {
    struct node *head = new node;
    struct node *second = new node;
    struct node *third = new node;

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 41;
    third->next = NULL;

    linklisttraversal(head);
    cout<<"insert after node"<<endl;
    head=insertafternode(head,second,40);
    linklisttraversal(head);

    return 0;
}

