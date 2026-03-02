#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of the first number = " << endl;
    cin >> a;
    cout << "Enter the value of the second number = " << endl;
    cin >> b;
    while (1)
    {
        int choice;
        cout << "Enter the choice = " << endl;
        cout << "Enter 1 for Addition " << endl;
        cout << "Enter 2 for Substraction " << endl;
        cout << "Enter 3 for Multiplicatoin " << endl;
        cout << "Enter 4 for Division " << endl;
        cout << "Enter 5 for mudulus " << endl;
        cout<<"Enter 6 for exit "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "The addition of the numbers " << a << " + " << b << " is = " << a + b << endl;
            break;
        case 2:
            cout << "The substraction of the numbers " << a << " - " << b << " is = " << a - b << endl;
            break;
        case 3:
            cout << "The Division of the numbers " << a << " / " << b << " is = " << a / b << endl;
            break;
        case 4:
            cout << "The Multiplication of the numbers " << a << " * " << b << " is = " << a * b << endl;
            break;
        case 5:
            cout << "The Mudulus of the numbers " << a << " % " << b << " is = " << a % b << endl;
            break;
        case 6:
            exit(0);
        default:
            cout << "You have entered wrong choices " << endl;
            break;
        }
    }

    return 0;
}