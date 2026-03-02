// // #include <iostream>
// // using namespace std;
// // class Node
// // {
// // public:
// //     int data = 12;
// //     Node *next;
// //     Node(int data)
// //     {
// //         this->data = data;
// //         next = NULL;
// //     }
// // };
// // void insetathead(Node *&head, int d)
// // {
// //     Node *temp = new Node(d);
// //     temp->next = head;
// //     head = temp;
// // }
// // void print(Node *&head)
// // {
// //     Node *temp = head;
// //     while (temp != NULL)
// //     {
// //         cout << temp->data << endl;
// //         temp = temp->next;
// //     }
// //     cout << endl;
// // }
// // int main()
// // {
// //     Node *node1 = new Node(124);
// //     // cout << "The data of the node1 = " << node1->data << endl;
// //     // cout << "The next of the node1 = " << node1->next << endl;
// //     // print(node1);
// //     Node *head=node1;
// //     print(head);
// //     insetathead(head,13);
// //     print(head);
// //     insetathead(head,11);
// //     print(head);
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
//     ~Node()
//     {
//         int value=this->data;
//         if(this->next!=NULL)
//         {
//             delete next;
//             this->next=NULL;
//         }
//      cout<<"Delete the node of the value = "<<value<<endl;
//     }
// };
// void insertathead(Node* &head,int data)
// {
//     Node* temp=new Node(data);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(Node* & tail ,int data)
// {
//     Node * temp=new Node(data);
//     tail->next=temp;
//     tail=temp;
// }
// void insertatanyposition(Node* & head,Node * &tail,int position,int data)
// {
//     if (position==1)
//     {
//         insertathead(head,data);
//         return;
//     }

//     Node * temp=head;
//     int cnt=1;
//     while (cnt<position-1)
//     {
//     temp=temp->next;
//     cnt++;
//     }
//     Node* nodetoinsert=new Node(data);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
//     if (temp->next==NULL)
//     {
//         insertattail(tail,data);
//     }

// }
// void deleteatposition(int posi,Node* &head)
// {
//     if (posi==1)
//     {
//       Node* temp=head;
//       head=head->next;
//       temp->next=NULL;
//       delete temp;
//     }
//     else
//     {
//         Node* curr=head;
//         Node*pre=NULL;
//         int cnt=1;
//         while (cnt<posi)
//         {
//         pre=curr;
//         curr=curr->next;
//         cnt++;
//         }
//         pre->next=curr->next;
//         curr->next=NULL;
//         delete curr;

//     }

//     }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *node1 = new Node(12);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;
// // Node node1(12);
// // cout<<node1.data<<endl;
// // cout<<node1.next<<endl;
// Node* head=node1;
// Node * tail=node1;
// // print(tail);
// insertattail(tail,10);
// // print(tail);
// insertattail(tail,13);
// insertattail(tail,15);
// // print(head)
// insertatanyposition(head,tail,3,19);
// print(head);
// cout<<" head"<<head->data<<endl;
// cout<<"tail"<<tail->data<<endl;
// deleteatposition(4,head);
// print(head);

// // print(head);
// // insertathead(head,13);
// // print(head);
// // insertathead(head,14);

// // insertathead(head,14);
// // insertathead(head,44);
// // insertathead(head,64);
// // print(head);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *pre;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->pre = NULL;
//     }
//     ~Node()
//     {
//         int value = this->data;
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//     }
// };
// void insetathead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head->pre = temp;
//     head = temp;
// }
// void insertattail(Node *&tail, int data)
// {
//     Node *temp = new Node(data);
//     tail->next = temp;
//     temp->pre = tail;
//     tail = temp;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void insertatposition(Node *&tail, Node *&head, int data, int position)
// {
//     if (position == 1)
//     {
//         insetathead(head, data);
//         return;
//     }
//     Node *temp = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     if (temp->next == NULL)
//     {
//         insertattail(tail, data);
//         return;
//     }
//     Node *nodetoinsert = new Node(data);
//     nodetoinsert->next = temp->next;
//     temp->next->pre = nodetoinsert;
//     temp->next = nodetoinsert;
//     nodetoinsert->pre = temp;
// }
// void deleteatposition(Node *&head, Node *&tail, int position)
// {
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = temp->next;
//         temp->next = NULL;
//         temp->next->pre = NULL;
//         delete temp;
//     }
//     else
//     {

//         Node *curr = head;
//         Node *pre = NULL;
//         int cnt = 1;
//         while (cnt < position)
//         {
//             pre = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         pre->next = curr->next;
//         // pre->next->pre = NULL;
//         curr->next = NULL;
//         curr->pre = NULL;
//         delete curr;
//     }

// }
// int main()
// {
//     Node *node1 = new Node(12);
//     // cout << node1->data << endl;
//     // cout << node1->next << endl;
//     // cout << node1->pre << endl;
//     Node *head = node1;
//     Node *tail = node1;
//     insetathead(head, 13);

//     print(head);
//     insertattail(tail, 23);
//     insertattail(tail, 53);
//     insertattail(tail, 63);
//     print(head);
//     insertatposition(tail, head, 76, 1);
//     deleteatposition(head,tail,6);
//     print(head);
//     return 0;
// }
//  circular ll
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        while (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void insertnode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        Node *curr = new Node(data);
        Node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        curr->next = temp->next;
        temp->next = curr;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << endl;
        tail = tail->next;
    } while (tail != temp);
}
void deletelement(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "List is empty " << endl;
    }

    else
    {
        Node *pre = tail;
        Node *curr = pre->next;
        while (curr->data != element)
        {
            pre = curr;
            curr = curr->next;
        }
        pre->next = curr->next;
        if (tail == curr)
        {
            tail = pre;
        }
        curr->next = NULL;
        delete curr;

      if (pre == curr)
        {
            tail = NULL;
            cout << "null" << endl;
        }
    }
}
int main()
{
    Node *tail = NULL;
    insertnode(tail, 5, 3);
    // insertnode(tail, 3, 8);
    // insertnode(tail, 8, 23);
    // insertnode(tail, 23, 13);
    // print(tail);
    // deletelement(tail,3);
    // cout<<endl;
    deletelement(tail, 23);
    print(tail);

    return 0;
}