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

void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *findmid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next; // ✅ Fix: Start fast at head->next

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node *merge(Node *left, Node *right)
{
    if (!left) return right;
    if (!right) return left;

    Node *ans = new Node(-1); // Dummy node
    Node *temp = ans;

    while (left && right)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    if (left) temp->next = left;
    if (right) temp->next = right;

    Node *sortedList = ans->next;
    delete ans;
    return sortedList;
}

Node *mergesort(Node *head)
{
    if (!head || !head->next) return head;

    Node *mid = findmid(head);
    Node *left = head;
    Node *right = (mid) ? mid->next : NULL; // ✅ Fix: Check if mid is NULL
    mid->next = NULL;

    left = mergesort(left);
    right = mergesort(right);

    return merge(left, right);
}

int main()
{
    Node *node = new Node(13);
    node->next = new Node(9);
    node->next->next = new Node(5);
    node->next->next->next = new Node(1);
    node->next->next->next->next = new Node(4);

    cout << "Original List: ";
    display(node);

    node = mergesort(node);

    cout << "Sorted List: ";
    display(node);

    return 0;
}
