#include<iostream>
using namespace std;
class node
{
public:
      int data;
      node* next;
};
void display(node* n)
{
  while(n!=NULL)
  {
    cout<<"Value = "<<n->data<<endl;
    n = n->next;
  }
}
void insert(node* *head,int newdata)
{
    node *newnode = new node();
    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
}

int main()
{
    node *head = new node();
    node *first = new node();
    node *second = new node();
    int a,b,c,e1,e2,e3;
    cout<<"Enter the value of a,b,c = "<<endl;
    cin>>a>>b>>c;
    cout<<"Enter the value of e1,e2,e3 = "<<endl;
    cin>>e1>>e2>>e3;
    head->data = a;
    head->next = first;
    first->data = b;
    first->next = second;
    second->data = c;
    second->next = NULL;
    insert(&head,e1); 
    insert(&head,e2); 
    insert(&head,e3); 
    display(head);
}