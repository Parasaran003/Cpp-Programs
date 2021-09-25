#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* link;
};
void display(node* n)
{
    while(n != NULL)
    {
        cout<<n->data<<endl;
        n = n->link;
    }
}
void insertion(node* *head,int pos,int newdata)
{
    node* newnode = new node();
    newnode->data = newdata;
    node* temp = *head;
    if(pos == 1)
    {
        newnode->link = *head;
        *head = newnode;
    }
    else
    {
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->link;
    }
    newnode->link = temp->link;
    temp->link = newnode;
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
    int a,b,c,d,inspos,delpos,element;
    char choice;
    node* head = new node();
    node* first = new node();
    node* second = new node();
    node* third = new node();
    cout<<"Enter the elements of the linked list = "<<endl;
    cin>>a>>b>>c>>d;
    head->data = a;
    head->link = first;
    first->data = b;
    first->link = second;
    second->data = c;
    second->link = third;
    third->data = d;
    third->link = NULL;
    cout<<"Available Choices"<<endl;
    cout<<"Insertion - 1"<<endl<<"Deletion - 2"<<endl;
    cout<<"Enter the choice : ";
    cin>>choice;
    switch(choice)
    {
        case '1' : 
        {
            cout<<"Enter the position = ";
            cin>>inspos;
            cout<<"Enter the element to be inserted = ";
            cin>>element;
            cout<<"-------------------------------------------"<<endl;
            cout<<"Linked List After Insertion = "<<endl;
            insertion(&head,inspos,element);
            display(head);
            cout<<"-------------------------------------------"<<endl;
            break;
        }
        case '2' : 
        {
            cout<<"Enter the position = ";
            cin>>delpos;
            cout<<"-------------------------------------------"<<endl;
            cout<<"Linked List After Deletion = "<<endl;
            deletion(head,delpos);
            cout<<"-------------------------------------------"<<endl;
            break;
        }
        default :
        {
            cout<<"Choice that you have entered is invalid!"<<endl;
            break;
        }
    }
}