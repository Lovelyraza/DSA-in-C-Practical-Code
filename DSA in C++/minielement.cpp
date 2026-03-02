#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;
    int mini;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
        mini = INT16_MAX;
    }
    void push(int data)
    {
        if (top == size - 1)
        {
            printf("Stack is overflow");
        }
        else
        {

            if (data < mini)
            {
                int value = 2 * data - mini;
                top++;
                arr[top] = value;
                mini = min(mini, data);
            }
            else
            {
                top++;
                arr[top] = data;
            }
        }
    }
    // void display()
    // {
    //     cout<<mini<<endl;
    // }
    void pop()
    {
        if (top == -1)
        {
            cout << "The stack is underflow " << endl;
        }

        int popdata = arr[top];
        top--;
        if (popdata < mini)
        {
            mini = 2 * mini - popdata;
        }
    }

    int getMin()
    {
        if (top == -1)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return mini;
    }
};

int main()
{
    Stack st(6);

    st.push(7);
    cout << "Minimum: " << st.getMin() << endl;

    st.push(34);
    cout << "Minimum: " << st.getMin() << endl;

    st.push(2);
    cout << "Minimum: " << st.getMin() << endl;

    st.push(5);
    cout << "Minimum: " << st.getMin() << endl;

    st.push(9);
    cout << "Minimum: " << st.getMin() << endl;

    st.push(8);
    cout << "Minimum: " << st.getMin() << endl;

    st.pop();
    cout << "Minimum after pop: " << st.getMin() << endl;

    st.pop();
    cout << "Minimum after pop: " << st.getMin() << endl;

    return 0;
}