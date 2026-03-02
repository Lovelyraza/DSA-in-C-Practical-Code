#include <iostream>
using namespace std;
int min(int mini[], int sizee);
int max(int maxi[], int sizee);
int main()
{
    int size, i;
    cout << "Enter the size of the array = ";
    cin >> size;
    int minmax[100];
    for (i = 0; i < size; i++)
    {
        cin >> minmax[i];
    }
    int minimum = min(minmax, size);
    int maximum = max(minmax, size);
    cout << "The maximum number is = " << maximum << endl;
    cout << "The minimum number is = " << minimum << endl;
    return 0;
}
int min(int mini[], int sizee)
{
    int minn = INT32_MAX, i;
    for (i = 0; i < sizee; i++)
    {
        minn = min(minn, mini[i]);
        // if (mini[i] < minn)
        // {
        //     minn = mini[i];
        // }
    }
    return minn;
}
int max(int maxi[], int sizee)
{
    int mixii = INT32_MIN, i;
    for (i = 0; i < sizee; i++)
    {
        mixii = max(mixii, maxi[i]);
        // if (maxi[i] > mixii)
        // {
        //     mixii = maxi[i];
        // }
    }
    return mixii;
}