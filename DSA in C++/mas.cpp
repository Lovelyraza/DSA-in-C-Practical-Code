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

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *solve(Node *head1, Node *head2)
{
    // ✅ Step 1: Creating pointers
    Node *curr1 = head1;
    Node *next1 = curr1->next;
    Node *curr2 = head2;
    Node *prev = NULL;

    while (curr2 != NULL)
    {
        if (curr1->next == NULL || (curr2->data >= curr1->data && curr2->data <= next1->data))
        {
            curr1->next = curr2;
            Node *temp = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = temp;
        }
        else
        {
            curr1 = next1;
            if (next1 != NULL)
            {
                next1 = next1->next;
            }
        }
    }
    return head1;
}

Node *mergesorted(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    
    if (head1->data <= head2->data)
    {
        return solve(head1, head2);
    }
    else
    {
        return solve(head2, head1);
    }
}

int main()
{
    Node *node1 = new Node(1);
    node1->next = new Node(3);
    node1->next->next = new Node(5);

    Node *node2 = new Node(2);
    node2->next = new Node(4);
    node2->next->next = new Node(6);

    cout << "List 1: ";
    display(node1);
    cout << "List 2: ";
    display(node2);

    Node *mergedHead = mergesorted(node1, node2);

    cout << "Merged Sorted List: ";
    display(mergedHead);

    return 0;
}
