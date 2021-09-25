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
    cout<<"Value = "<<n->data<<endl;
    n = n->link;
  }
}
void insertend(node* *head , int newdata)
{
  //Prepare a new node
  node* newnode = new node();
  newnode->data = newdata;
  newnode->link = NULL;
  //If the linked list empty,newnode will be the head node
  if(*head == NULL)
  {
    *head = newnode;
    return;
  }
  //Find the last node
  node* last = *head;
  while(last->link != NULL)
  {
    last = last->link;
  }
  //INsert newnode after the last node
  last->link = newnode;
}
int main()
{
  node* head = new node();
  node* first = new node();
  node* second = new node();
  int a,b,c,en1,en2,en3;
  cout<<"Enter the value a,b,c = "<<endl;
  cin>>a>>b>>c;
  cout<<"Enter the value en1,en2,en3 = "<<endl;
  cin>>en1>>en2>>en3;
  head->data = a;
  head->link = first;
  first->data = b;
  first->link = second;
  second->data = c;
  second->link = NULL;
  insertend(&head,en1);
  insertend(&head,en2);
  insertend(&head,en3);
  display(head);
}