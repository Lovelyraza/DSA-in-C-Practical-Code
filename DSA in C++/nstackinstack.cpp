#include <iostream>
using namespace std;
class Nstack
{
public:
    int *arr;
    int *top;
    int *next;
    int freespot;
    int numberofstack;
    int sizeofarr;
    Nstack(int num, int siz)
    {
        numberofstack = num;
        sizeofarr = siz;
        arr = new int[sizeofarr];
        next = new int[sizeofarr];
        top = new int[numberofstack];
        freespot = 0;
        for (int i = 0; i < numberofstack; i++)
        {
            top[i] = -1;
        }
        for (int i = 0; i < sizeofarr; i++)
        {
            next[i] = i + 1;
        }
        next[sizeofarr - 1] = -1;
        freespot = 0;
    }
    bool push(int x, int m)
    {
        if (freespot == -1)
        {
            return false;
        }
        int index = freespot;
        freespot = next[index];
        arr[index] = x;
        next[index] = top[m - 1];
        top[m - 1] = index;
        return true;
    }
    int pop(int m)

    {
        if (top[m - 1] == -1)
        {
            return -1;
        }
        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};
int main()
{
    Nstack stack(3, 6); // 3 stacks in an array of size 6

    stack.push(10, 1);
    stack.push(20, 2);
    stack.push(30, 3);

    cout << "Popped from stack 1: " << stack.pop(1) << endl;
    cout << "Popped from stack 2: " << stack.pop(2) << endl;
    cout << "Popped from stack 3: " << stack.pop(3) << endl;

    return 0;
}