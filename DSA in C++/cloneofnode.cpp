#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* arb; // Arbitrary pointer
    Node(int val)
    {
        data = val;
        next = NULL;
        arb = NULL;
    }
};

class Solution {
private:
    void insertattail(Node*& head, Node*& tail, int value)
    {
        Node* newnode = new Node(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

public:
    Node* cloneLinkedList(Node* head) 
    {
        if (head == NULL) return NULL;

        // Step 1: Clone linked list without random pointers
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        Node* temp = head;
        
        while (temp != NULL)
        {
            insertattail(clonehead, clonetail, temp->data);
            temp = temp->next;
        }

        // Step 2: Create mapping from old nodes to new nodes
        unordered_map<Node*, Node*> oldtonewnode;
        Node* originalnode = head;
        Node* clonenode = clonehead;

        while (originalnode != NULL && clonenode != NULL)
        {
            oldtonewnode[originalnode] = clonenode;
            originalnode = originalnode->next;
            clonenode = clonenode->next;
        }

        // Step 3: Assign random pointers (arb)
        originalnode = head;
        clonenode = clonehead;

        while (originalnode != NULL)
        {
            if (originalnode->arb != NULL)
                clonenode->arb = oldtonewnode[originalnode->arb];
            originalnode = originalnode->next;
            clonenode = clonenode->next;
        }

        return clonehead;
    }
};

// Function to print linked list
void printList(Node* head)
{
    while (head != NULL)
    {
        cout << "Data: " << head->data;
        if (head->arb)
            cout << ", Arb: " << head->arb->data;
        cout << endl;
        head = head->next;
    }
}

// Driver Code
int main()
{
    // Creating a linked list with random pointers
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head->arb = head->next->next; // 1->arb -> 3
    head->next->arb = head;       // 2->arb -> 1
    head->next->next->arb = head->next; // 3->arb -> 2

    Solution obj;
    Node* clonedHead = obj.cloneLinkedList(head);

    cout << "Original List:\n";
    printList(head);
    cout << "\nCloned List:\n";
    printList(clonedHead);

    return 0;
}
