// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num;
//     int ans = 0;
//     int i = 0;
//     cout << "Enter the number = ";
//     cin >> num;
//     while (num != 0)
//     {
//         int bit = num & 1;
//         ans = (bit * pow(10, i)) + ans;
//         num = num>>1;
//         i++;
//     }

//     cout << "Answer in binary form = " << ans << endl;
//     return 0;
// }
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {

        // int bit  = n & 1;

        // ans = (bit * pow(10, i) ) + ans;

        // n = n >> 1;
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << " Answer is " << ans << endl;
    return 0;
}