#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
      int data;
      node *next;
      node(int value)
      {
          data=value;
          next=NULL;
      }
};

void display(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node *takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *temp=NULL;
    
    while(data!=-1)
    {
        node *n=new node(data);
        if(head==NULL)
        {
            head=temp=n;
        }
        else
        {
            temp->next=n;
            temp=n;
        }
        cin>>data;
    }
    return head;
}
int main()
{
    node *head=takeinput();
    display(head);
    
    return 0;
}
