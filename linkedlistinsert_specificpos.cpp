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
void insertion(node* *head,int pos,int newdata)
{
    node* newnode = new node();
    newnode->data = newdata;
    node* n = *head;
    if(pos == 1)
    {
        newnode->link = *head;
       *head = newnode;
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        {
            n = n->link;
        }
        newnode->link = n->link;
        n->link = newnode;
    }
}
int main()
{
    int a,b,c,d,inspos,element;
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
    cout<<"Enter the position = ";
    cin>>inspos;
    cout<<"Enter the element to be added = ";
    cin>>element;
    insertion(&head,inspos,element);
    display(head);
}