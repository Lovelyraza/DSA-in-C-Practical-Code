#include <iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter the value of the num = ";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        int value = i;
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
            value = value - 1;
        }

        cout << endl;
    }

    return 0;
}