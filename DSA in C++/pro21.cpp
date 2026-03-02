#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, i = 0;
    int reverse = 0;
    int lasdigit;
    cout << "Enter the number = ";
    cin >> num;
    while (num != 0)
    {
        lasdigit = num % 10;
        reverse = (reverse * 10)+lasdigit;
        num = num / 10;
        i++;
    }

    cout << "Reverse of the number = " << reverse << endl;
    return 0;
}