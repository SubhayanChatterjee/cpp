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
struct node *deleteatbeg(struct node *head)
{
struct node *ptr=head;
struct node *p=ptr->next;
//head=ptr->next;
//free(ptr);
    return p;
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
    cout<<"deletion at begining"<<endl;
    head=deleteatbeg(head);
linklisttraversal(head);
    return 0;
}

