// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// vector<int> rightsmall(vector<int> &arrr, int sizee)
// {
//     stack<int> s;
//     // s.push(-1);
//     vector<int> ans(sizee, sizee);
//     for (int i = sizee - 1; i >= 0; i--)
//     {
//         int element = arrr[i];
//         while (!s.empty() && arrr[s.top()] <= element)

//         {
//             s.pop();
//         }
//         if (!s.empty()) {
//             ans[i] = s.top();
//         } else {
//             ans[i] = sizee; // Last index ke baad ka position
//         }
//         s.push(i);
        
//     }
//     return ans;
// }
// vector<int> leftsmall(vector<int> &arrr, int sizee)
// {
//     stack<int> s;
//     // s.push(-1);
//     vector<int> ans(sizee, -1);
//     for (int i = 0; i<sizee; i++)
//     {
//         int element = arrr[i];
//         while (!s.empty() && arrr[s.top()] >= element)

//         {
//             s.pop();
//         }
//         if (!s.empty())
//         {
//             ans[i] = s.top();
//         }

//         s.push(i);
//     }
//     return ans;
// }

// // Function to find the largest rectangular area in a histogram
// int largestRectangleArea(vector<int>& heights) {
//     int n = heights.size();
//     stack<int> s;
//     vector<int> left(n), right(n);
//     right=rightsmall(heights,n);
//     left=leftsmall(heights,n);

//     // Finding the Previous Smaller Element index
//     // for (int i = 0; i < n; i++) {
//     //     while (!s.empty() && heights[s.top()] >= heights[i]) {
//     //         s.pop();
//     //     }
//     //     left[i] = s.empty() ? 0 : s.top() + 1;
//     //     s.push(i);
//     // }

//     // // Clear the stack to reuse
//     // while (!s.empty()) {
//     //     s.pop();
//     // }

//     // // Finding the Next Smaller Element index
//     // for (int i = n - 1; i >= 0; i--) {
//     //     while (!s.empty() && heights[s.top()] >= heights[i]) {
//     //         s.pop();
//     //     }
//     //     right[i] = s.empty() ? n - 1 : s.top() - 1;
//     //     s.push(i);
//     // }

//     // Calculate the largest rectangle area
//     int maxArea = 0;
//     for (int i = 0; i < n; i++) {
//         int width = right[i] - left[i] - 1;
//         maxArea = max(maxArea, heights[i] * width);
//     }

//     return maxArea;
// }

// int main() {
//     vector<int> histogram = {2, 1, 5, 6, 2, 3};
//     cout << "Largest Rectangle Area in Histogram: " << largestRectangleArea(histogram) << endl;
//     return 0;
// }
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> rightsmall(vector<int> &arr, int size) {
    stack<int> s;
    vector<int> ans(size, size); // Default: rightmost index + 1

    for (int i = size - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top();
        }
        s.push(i);
    }
    return ans;
}

vector<int> leftsmall(vector<int> &arr, int size) {
    stack<int> s;
    vector<int> ans(size, -1); // Default: leftmost index - 1

    for (int i = 0; i < size; i++) { // FIX: Left to Right loop
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top();
        }
        s.push(i);
    }
    return ans;
}

// Function to find the largest rectangular area in a histogram
int largestRectangleArea(vector<int> &heights) {
    int n = heights.size();
    vector<int> left = leftsmall(heights, n);
    vector<int> right = rightsmall(heights, n);

    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int width = right[i] - left[i] - 1; // FIX: Width formula
        maxArea = max(maxArea, heights[i] * width);
    }

    return maxArea;
}

int main() {
    vector<int> histogram = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area in Histogram: " << largestRectangleArea(histogram) << endl;
    return 0;
}
