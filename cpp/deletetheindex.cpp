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
struct node *deletetheindex(struct node *head,int index)
{
struct node *ptr=head;
int i=0;
while(i!=index-1)
{
    ptr=ptr->next;
    i++;
}
struct node *q=ptr->next;
ptr->next=q->next;
//head=ptr->next;
free(q);
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
   cout<<"deletion after the index"<<endl;
   // head=deleteatbeg(head);
//linklisttraversal(head);
head=deletetheindex(head,2);
linklisttraversal(head);
    return 0;
}

