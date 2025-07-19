// Computes the nth Fibonacci number.
// Returns 0 for invalid inputs (n <= 0).
// Time complexity: O(n)
// Space complexity: O(1)

class Solution {
public:
    int fib(int n) {
        if (n<=0) return 0; //invalid input, though not possible in LeetCode.
        if (n<2) return n;
        int prev1 = 0; // fib(0)
        int current = 1; //fib(1)
        for (int i = 2; i <= n; i++) {
            current = prev1 + current; // fib(n) = fib(n-2) + fib(n-1)
            prev1 = current - prev1;  // fib(n-1) = fib(n) - fib(n-2)
        }
        return current;
    }
};
// For larger inputs matrix exponentiation can achieve a significant speed up O(log n).