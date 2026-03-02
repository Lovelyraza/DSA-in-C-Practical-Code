#include <iostream>
using namespace std;
int main()
{
    int i, num;
    cout << "Enter the number = ";
    cin >> num;
    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            cout << "This is not a prime number " << endl;
            break;
        }
        else
        {
            cout << "This is a prime number " << endl;
            break;
        }
    }

    return 0;
}