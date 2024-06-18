#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void linklisttraversal(struct node *ptr)
{
    while(ptr!= NULL)
    {
        cout << "element are: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct node *delete_the_value(struct node *head,int value)
{
struct node *ptr=head;
struct node *q=head->next;
while(q->data!=value && q->data!=NULL)
{
    ptr=ptr->next;
    q=q->next;
}
//struct node *q=ptr->next;
//ptr->next=q;
if(q->data==value)
{
ptr->next=q->next;
//free(q);
}
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
   cout<<"deletion at the end"<<endl;
   // head=deleteatbeg(head);
//linklisttraversal(head);
head=delete_the_value(head,11);
linklisttraversal(head);
    return 0;
}

