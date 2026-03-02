#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to display linked list
void display(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse a linked list
Node* reverse(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Function to find the middle of the linked list
Node* findmiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// Function to check if the linked list is a palindrome
bool checkpalind(Node*& head) {
    if (head == NULL || head->next == NULL) return true; // Empty or single node is always palindrome

    // Step 1: Find middle of the linked list
    Node* middle = findmiddle(head);

    // Step 2: Reverse second half
    Node* secondHalf = reverse(middle);

    // Step 3: Compare both halves
    Node* firstHalf = head;
    Node* temp = secondHalf;
    bool isPalindrome = true;

    while (temp != NULL) {
        if (firstHalf->data != temp->data) {
            isPalindrome = false;
            break;
        }
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    // Step 4: Restore original list (optional)
    reverse(secondHalf);

    return isPalindrome;
}

int main() {
    Node* node1 = new Node(1);
    node1->next = new Node(3);
    node1->next->next = new Node(1);

    display(node1);

    if (checkpalind(node1)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is NOT a palindrome." << endl;
    }

    return 0;
}
