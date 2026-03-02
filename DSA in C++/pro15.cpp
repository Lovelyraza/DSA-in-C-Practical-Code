#include <iostream>
using namespace std;
int main()
{
    int row, col1, col2, num, k;
    cout << "Enter number = ";
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col1 = 1; col1 <= num - 1; col1++)
        {
            cout << " ";
        }
        for (col2 = num - 1; col2 <= row; col2--)
        {
            cout << "x";
        }
        cout << endl;
    }

    return 0;
}