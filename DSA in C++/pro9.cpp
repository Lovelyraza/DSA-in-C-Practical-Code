#include <iostream>
using namespace std;
int main()
{
    int row, col, num;
    cout << "Enter the numer = ";
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num; col++)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}