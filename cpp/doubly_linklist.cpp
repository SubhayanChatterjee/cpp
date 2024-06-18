#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void linklisttraversal(struct node *ptr,struct node *pr)
{
    while(ptr != NULL)
    {
        cout << "element are: " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout<<"reverse the element"<<endl;
    while(pr!=NULL)
    {
    	cout<<"element are"<<pr->data<<endl;
    	pr = pr->prev;
	}
}

int main() {
    struct node *head = new node;
    struct node *second = new node;
    struct node *third = new node;
 struct node *fourth=new node;
    head->data = 7;
    head->next = second;
    head->prev =NULL;
    second->data = 11;
    second->next = third;
    second->prev=head;
    third->data = 41;
    third->next = fourth;
    third->prev =second;
    fourth->data=22;
    fourth->next=NULL;
    fourth->prev=third;

    linklisttraversal(head,fourth);

    delete head;
    delete second;
    delete third;

    return 0;
}

