#include <iostream>
using namespace std;

// Function to calculate ways to climb stairs using recursion
int climbStairs(int n) {
    if (n == 1) {
        return 1;  // Base case: 1 way to climb 1 step
    }
    if (n == 2) {
        return 2;  // Base case: 2 ways to climb 2 steps
    }
    return climbStairs(n - 1) + climbStairs(n - 2);  // Recursive case
}

int main() {
    int stairs = 8;
    int result = climbStairs(stairs);
    cout << "Number of ways to climb " << stairs << " stairs: " << result << endl;
    return 0;
}
