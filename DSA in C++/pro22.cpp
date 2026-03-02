#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Entere the value of a = ";
    cin >> a;
    cout << "Enter the value of b = ";
    cin >> b;
    cout << "Enter the operation you want to perform = ";
    cin >> ch;
    switch (ch)
    {
    case '+':
    {
        int sum = a + b;
        cout << "The additon of the two integers a + b = " << sum << endl;
    }
    break;
    case '-':
    {
        int sub = a - b;
        cout << "The subtraction of the two integers a + b = " << sub << endl;
    }
    break;
    case '*':
    {
        int mul = a * b;
        cout << "The multiplication of the two integers a + b = " << mul << endl;
    }
    break;
    case '/':
    {
        int div = a / b;
        cout << "The division of the two integers a + b = " << div << endl;
    }
    case '%':
    {
        int mudulus = a % b;
        cout << "The mudulus of the two integers a + b = " << mudulus << endl;
        break;
    }

    default:
        cout << "You have entered wrong operator please try again " << endl;
        break;
    }
    return 0;
}