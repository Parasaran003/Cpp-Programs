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
    while(n!=NULL)
    {
        cout<<"Value = "<<n->data<<endl;
        n = n->link;
    }
}
void middle_insertion(node*previous,int newdata)
{
    if(previous==NULL)
    {
        cout<<"Previous node can't be NULL !"<<endl;
        return;
    }
    node* newnode = new node();
    newnode->data = newdata;
    newnode->link = previous->link;
    previous->link = newnode;
}
int main()
{
    node* head = new node();
    node* first = new node();
    node* second = new node();
    int a,b,c,m1,m2,m3;
    cout<<"Enter the value of a,b,c = ";
    cin>>a>>b>>c;
    cout<<"Enter the value of m1,m2,m3 = ";
    cin>>m1>>m2>>m3;
    head->data = a;
    head->link = first;
    first->data = b;
    first->link = second;
    second->data = c;
    second->link = NULL;
    middle_insertion(head,m1);
    middle_insertion(first,m2);
    middle_insertion(second,m3);
    display(head);
}