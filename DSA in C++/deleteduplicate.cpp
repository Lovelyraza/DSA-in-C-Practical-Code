#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void display(Node*head)
{
    Node*temp=head;
    while (temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    
}
void removeDuplicates(Node* head) {
    Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        Node* temp = curr;
        while (temp->next != NULL) {
            if (curr->data==temp->next->data)
             {
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            } else {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

//  void removedupli(Node*head)
// {
//     Node*curr=head;
//     while (curr!=NULL)
//     {
//         if ((curr->next!=NULL) && curr->data==curr->next->data)
//         {
//             Node*next_next=curr->next->next;
//             Node*nodedele=curr->next;
//             delete(nodedele);
//             curr->next=next_next;
//         }
//         curr=curr->next;
        
//     }
    
    
    
// }
int main()
{
    Node*node1=new Node(3);
    node1->next=new Node(5);
    node1->next->next=new Node(6);
    node1->next->next->next=new Node(3);
    node1->next->next->next->next=new Node(5);
    node1->next->next->next->next->next=new Node(6);

    
    display(node1);
    removeDuplicates(node1);
    cout<<"After removing the duplicate from the linked list "<<endl;
    display(node1);
    return 0;
}