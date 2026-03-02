#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if (this->next!=NULL)
        {
            delete next;
           this->next =NULL;
        }
        
    }
};
void insertnode(Node*&tail,int element,int data)
{
    if (tail==NULL)
    {
        Node*newnode=new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
        Node*nodetoinsert=new Node(data);
        Node*temp=tail;
        while (temp->data!=element)
        {
            temp=temp->next;
        }
     nodetoinsert->next=temp->next;
     temp->next=nodetoinsert;
        
    }
    
}
void display(Node*&tail)
{
    Node*temp=tail;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=tail);
    
}
void deleteelement(Node*&tail,int element)
{
    if (tail==NULL)
    {
    cout<<"The linked list is empty "<<endl;
    }
    
    else
    {
        Node*pre=tail;
        Node*curr=pre->next;
      while (curr->data!=element)
      {
        pre=curr;
        curr=curr->next;
      }
      
        pre->next=curr->next;
        if (tail==curr)
        {
          tail=pre;
        }
        else if (curr==tail)
        {
            tail=NULL;
        }
        
        curr->next=NULL;
        delete curr;
        
    }
    
}
bool reverseornot(Node*&head)
{
    if (head==NULL)
    {
        return NULL;
    }
    Node*temp=head->next;
    while (temp!=NULL&& temp!=head)
    {
        temp=temp->next;
    }
    if (temp==head)
    {
        return true;
    }
    return false;
    
    
    
}
int main()
{
    Node*node1=NULL;
    Node*tail=node1;
    Node*head=node1;
    insertnode(tail,4,5);
    // display(tail);
    insertnode(tail,5,6);
    insertnode(tail,6,7);
    insertnode(tail,7,8);
    insertnode(tail,8,9);
    display(tail);
    // deleteelement(tail,5);
    cout<<endl;
    display(tail);
    if (reverseornot(head))
    {
    cout<<"The linked list is circular list "<<endl;
    }
    else
    {
        cout<<"The linked list is not circular "<<endl;
    }
    

    return 0;
}