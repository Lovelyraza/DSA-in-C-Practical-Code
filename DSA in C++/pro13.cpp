#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    cout << "Enter number = ";
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
        {
            char ch = 'A' + row - 2 + col;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}