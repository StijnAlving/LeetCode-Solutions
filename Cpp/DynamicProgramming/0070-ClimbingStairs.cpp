// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0) {
            return 0; // Invalid input 
        }
        if (n<3) {
            return n;
        }
        int a = 1, b=2; // Solutions for n=1 and n=2
        int c; 
        for (int i=3; i<=n; i++) {
            c = a + b; // #solutions for n = #solutions for n-2 + #solution for n-1 
            a = b;
            b = c;
        }
    return c;
    }
};
// For larger inputs matrix exponentiation can achieve a significant speed up O(log n).