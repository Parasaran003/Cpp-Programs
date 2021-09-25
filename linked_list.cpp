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
int main()
{
    node *head = new node();
    node *first = new node();
    node *second = new node();
    int a,b,c;
    cout<<"Enter the value of a,b,c = "<<endl;
    cin>>a>>b>>c;
    head->data = a;
    head->next = first;
    first->data = b;
    first->next = second;
    second->data = c;
    second->next = NULL;
    display(head);
}