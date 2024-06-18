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
struct node *insert_at_begining(struct node *head,int data)
{
    struct node *ptr=new node;
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct node *insertatindex(struct node *head,int data,int index)
{
    struct  node *ptr=new node;
    struct node *p=head;
    int i=0;
    while(i!=index)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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
//cout<<"new list after insertion at first"<<endl;
//head=insert_at_begining(head,56);
//linklisttraversal(head);
cout<<"insert at middle"<<endl;
head=insertatindex(head,66,2);
linklisttraversal(head);
   /* delete head;
    delete second;
    delete third;*/

    return 0;
}

