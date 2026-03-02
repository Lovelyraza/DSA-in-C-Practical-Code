// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int findCelebrity(vector<vector<int>> &M, int n) {
//     stack<int> s;

//     // Step 1: Sabhi log stack me daal do
//     for (int i = 0; i < n; i++) {
//         s.push(i);
//     }

//     // Step 2: Stack se do elements nikal ke compare karo
//     while (s.size() > 1) {
//         int A = s.top();
//         s.pop();
//         int B = s.top();
//         s.pop();

//         if (M[A][B] == 1) {
//             // A knows B, so A cannot be a celebrity
//             s.push(B);
//         } else {
//             // A does not know B, so B cannot be a celebrity
//             s.push(A);
//         }
//     }

//     // Step 3: Potential celebrity bacha
//     int celeb = s.top();

//     // Step 4: Verify if the remaining person is actually a celebrity
//     for (int i = 0; i < n; i++) {
//         if (i != celeb) {
//             if (M[celeb][i] == 1 || M[i][celeb] == 0) {
//                 return -1;
//             }
//         }
//     }

//     return celeb;
// }

// int main() {
//     vector<vector<int>> M = {
//         {0, 1, 0},
//         {0, 0, 0},
//         {0, 1, 0}
//     };

//     int n = 3;
//     int celeb = findCelebrity(M, n);

//     if (celeb == -1) {
//         cout << "No Celebrity Found" << endl;
//     } else {
//         cout << "Celebrity is person " << celeb << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int findceleb(vector<vector<int>> &mm, int nn)
{
    stack<int> s;
    for (int i = 0; i < nn; i++)
    {
        s.push(i);
    }
    int a = s.top();
    s.pop();
    int b = s.top();
    s.pop();
    if (mm[a][b] == 1)
    {
        s.push(b);
    }
    else
    {
        s.push(a);
    }
    int celebrity = s.top();
    for (int i = 0; i < nn; i++)
    {
        if (i != celebrity)
        {
            if (mm[celebrity][i] == 1 || mm[i][celebrity] == 0)
            {
                return -1;
            }
        }
    }
    return celebrity;
}
int main()
{
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0},
    };
    int n = 3;
    int celeb = findceleb(M, n);
    if (celeb == -1)
    {
        cout << "There is no celebrity " << endl;
    }
    else
    {
        cout << "The celebrity person is " << celeb << endl;
    }

    return 0;
}
