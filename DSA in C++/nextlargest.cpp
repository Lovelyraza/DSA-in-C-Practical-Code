// #include <iostream>
// #include<vector>
// #include<stack>

// using namespace std;

// vector<int> nextGreaterElement(vector<int>& arr) {
//     int n = arr.size();
//     vector<int> result(n, -1);
//     stack<int> st;

//     for (int i = n - 1; i >= 0; i--) {
//         while (!st.empty() && st.top() <= arr[i]) {
//             st.pop();
//         }
//         if (!st.empty()) {}
//             result[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     return result;
// }

// int main() {
//     vector<int> arr = {4, 15, 6, 5};
//     vector<int> ans = nextGreaterElement(arr);
//     for (int x : ans) {
//         cout << x << " ";
//     }
//     return 0;
// }
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> findnextlargestelement(vector<int> &arrr, int sizee)
{
    stack<int> s;
    // s.push(-1);
    vector<int> ans(sizee, -1);
    for (int i = sizee - 1; i >= 0; i--)
    {
        int element = arrr[i];
        while (!s.empty() && s.top() <= element)
        {
            s.pop();
        }
        if (!s.empty())
        {
            ans[i] = s.top();
        }

        s.push(element);
    }
    return ans;
}
int main()
{
    vector<int> arr = {4, 15, 6, 5};
    vector<int> ans = findnextlargestelement(arr, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    // for (int x : ans)
    // {
    //     cout << x << " ";
    // }

    return 0;
}