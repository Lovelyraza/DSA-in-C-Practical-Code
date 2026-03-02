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
        this->next = NULL;
    }
};
Node *revsere(Node *&head)
{

    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while (current != nullptr)
    {
        next = current->next; // Store next node
        current->next = prev; // Reverse link
        prev = current;       // Move prev forward
        current = next;       // Move current forward
    }
    head = prev; // Update head to the new first node
    return head;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertattail(Node *&head, Node *&tail, int value)
{

    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
Node *add(Node *&head1, Node *&head2)
{
    Node *anshead = NULL;
    Node *anstial = NULL;
    int carry = 0;
    while (head1 != NULL || head2 != NULL || carry != 0)
    {
        int value1 = 0;
        if (head1 != NULL)
        {
            value1 = head1->data;
        }
        int value2 = 0;
        if (head2 != NULL)
        {
            value2 = head2->data;
        }

        int sum = carry + value1 + value2;
        int digit = sum % 10;
        insertattail(anshead, anstial, digit);
        carry = sum / 10;
        if (head1 != NULL)
        {
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            head2 = head2->next;
        }
    }
    // while (head1 != NULL)
    // {
    //     int sum = carry + head1->data;
    //     int digit = sum % 10;
    //     insertattail(anshead, anstial, digit);
    //     carry = sum / 10;
    //     head1 = head1->next;
    // }
    // while (head2 != NULL)
    // {
    //     int sum = carry + head2->data;
    //     int digit = sum % 10;
    //     insertattail(anshead, anstial, digit);
    //     carry = sum / 10;
    //     head2 = head2->next;
    // }
    // while (carry != 0)
    // {
    //     int sum = carry;
    //     int digit = sum % 10;
    //     insertattail(anshead, anstial, digit);
    //     carry = sum / 10;
    // }
    return anshead;
}
int main()
{
    Node *node1 = new Node(4);
    node1->next = new Node(5);
    Node *node2 = new Node(3);
    node2->next = new Node(4);
    node2->next->next = new Node(5);
    node1 = revsere(node1);
    display(node1);
    cout << endl;
    node2 = revsere(node2);
    display(node2);
    Node *ans = add(node1, node2);
    revsere(ans);
    cout << endl;
    display(ans);
    // cout<<endl;
    // node1=revsere(node1);
    // display(node1);
    return 0;
}