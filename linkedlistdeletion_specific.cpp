#include<iostream>
using namespace std;
class node
{
public:
    float data;
    node* link;
};
void display(node* n)
{
    cout<<"Linked List = "<<endl;
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n = n->link;
    }
}
void deletion(node* head,int pos)
{
    node* temp = head;
    node* prev;
    if(pos == 1)
    {
        temp = head;
        head = head->link;
        temp->link = NULL;
        display(head);
    }
    else
    {
    for(int i=1;i<pos;i++)
    {
        prev = temp;
        temp = temp->link;
    }
        prev->link = temp->link;
        display(head);
    }
}
int main()
{
    int a,b,c,d,delpos;
    node* head = new node();
    node* first = new node();
    node* second = new node();
    node* third = new node();
    cout<<"Enter the elements of the linked list = "<<endl;
    cin>>a>>b>>c>>d;
    head->data=a;
    head->link=first;
    first->data=b;
    first->link=second;
    second->data=c;
    second->link=third;
    third->data=d;
    third->link=NULL;
    cout<<"Enter the position to be deleted = ";
    cin>>delpos;
    deletion(head,delpos);
}