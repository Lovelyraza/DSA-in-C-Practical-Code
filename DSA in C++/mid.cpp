// #include <iostream>
// using namespace std;
// int binary(int arr[], int size, int ele)
// {
//     int s = 0;
//     int e = size - 1;
//     cout << e << endl;
//     int mid = s + (e - s) / 2;
//     cout<<mid<<endl;
//     while (s <= e)
//     {
//         if (arr[mid] == ele)
//         {
//             return mid;
//         }
//         if (arr[mid] > ele)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[5] = {2, 5, 7, 8, 9};
//     int key = 2;
//     int ans = binary(arr, 5, key);
//     // for (int i = 0; i <5; i++)
//     // {
//     //     if (arr[i]==key)
//     //     {
//     //        ans=i;
//     //     }

//     // }
//     if (ans==-1 )
//     {
//         cout << "The key is not  found " << endl;
//     }
//     else
//     {
//         cout << "The key is  found at index "<<ans<<" = "<<arr[ans] << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {23, 53, 6, 1, 4};

    // for (int i = 0; i < 5; i++)
    // {
    //     int miniindex = i;

    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[j]<arr[miniindex])
    //         {
    //             miniindex=j;
    //         }
            

    //     }
    //     swap(arr[miniindex], arr[i]);
    // }
    for (int i = 1; i <5; i++)
    {
        int temp=arr[i];
        int j = i-1;
        for (; j >=0; j--)
        {
            if (arr[j]>temp)
            {
            arr[j+1]=arr[j];
            }
            else
            break;            
        }
        arr[j+1]=temp;
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}