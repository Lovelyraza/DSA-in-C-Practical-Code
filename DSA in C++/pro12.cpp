#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    char ch = 'A';
    cout << "Enter number = ";
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            // char ch = 'A' + col - 1;
            cout << ch << " ";
            ch = ch + 1;
        }

        cout << endl;
    }
    return 0;
}