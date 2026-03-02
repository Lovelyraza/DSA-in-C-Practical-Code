#include <iostream>
using namespace std;
int main()
{
    // int n,i;
    // cout<<"Enter the value of n = ";
    // cin>>n;
    // for ( i = 1; i <=n; i++)
    // {
    //     cout<<i<<endl;
    // }
    // for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    // {
    //     cout << a << " " << b << " " << c << endl;
    // }

    // return 0;
    // int num, sum = 0, i;
    // cout << "Enter the number = ";
    // cin >> num;
    // for (i = 1; i <= num; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << "The sum of the numbers is = " << sum << endl;
    int num, sum, a, b, i, nextnumber;
    cout << "Enter the number upto fibonaci series dispaly = ";
    cin >> num;
    a = 0;
    b = 1;
    cout << a << " ";
    cout << b << " ";
    for (i = 1; i <= num; i++)
    {
        nextnumber = a + b;
        a = b;
        b = nextnumber;
        cout << nextnumber << " ";
    }
}