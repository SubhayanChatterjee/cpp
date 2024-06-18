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

int main() {
    struct node *head = new node;
    struct node *second = new node;
    struct node *third = new node;
 struct node *fourth=new node;
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 41;
    third->next = fourth;
    fourth->data=22;
    fourth->next=NULL;

    linklisttraversal(head);

    delete head;
    delete second;
    delete third;

    return 0;
}

