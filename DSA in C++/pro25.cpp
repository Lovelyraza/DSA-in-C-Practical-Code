#include <iostream>
using namespace std;
void input(int arrr[], int siz);
bool search(int arrr[], int sizee, int kayy);
int main()
{
    // Binary Search in Array
    int size, i, key;
    cout << "Enter the size of the array = ";
    cin >> size;
    int arr[1000];
    input(arr, size);
    cout << "Enter the element to find the array = ";
    cin >> key;
    bool found = search(arr, size, key);
    if (found)
    {
        cout << "The element is found in the array " << endl;
    }
    else
    {
        cout << "The element is not found in the array ";
    }

    return 0;
}
void input(int arrr[], int siz)
{
    int i;
    for (i = 0; i < siz; i++)
    {
        cin >> arrr[i];
    }
}
bool search(int arrr[], int sizee, int kayy)
{
    int i;
    for (i = 0; i < sizee; i++)
    {
        if (arrr[i] == kayy)
        {
            return 1;
        }
    }

    return 0;
}