// #include <iostream>
// #include <stack>
// using namespace std;

// // Recursive function to delete the middle element
// void deleteMiddle(stack<int> &s, int count, int size) {
//     // Base case: If we have reached the middle element
//     if (count == size / 2) {
//         s.pop();
//         return;
//     }

//     // Store top element and remove it
//     int topElement = s.top();
//     s.pop();

//     // Recursive call
//     deleteMiddle(s, count + 1, size);

//     // Push the element back after deletion of middle element
//     s.push(topElement);
// }

// int main() {
//     stack<int> s;

//     // Stack of size 5 (top to bottom order)
//     s.push(5);
//     s.push(4);
//     s.push(3); // Middle element (should be deleted)
//     s.push(2);
//     s.push(1);

//     int size = s.size();
//     deleteMiddle(s, 0, size);

//     // Printing stack after deleting middle element
//     cout << "Stack after deleting middle element: ";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;

//     return 0;
// }
#include<iostream>
#include<stack>
using namespace std;
void deletemiddle(stack<int> &s,int count,int sizee)
{
    if (count==sizee/2)
    {
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    deletemiddle(s,count+1,sizee);
    s.push(num);

    
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    int size=s.size();
    deletemiddle(s,0,size);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

    return 0;
}