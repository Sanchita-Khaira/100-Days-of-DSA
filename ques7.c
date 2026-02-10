/*Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

Input:
- Single integer n

Output:
- Print the n-th Fibonacci number

Example:
Input:
6

Output:
8

Explanation: Sequence: 0,1,1,2,3,5,8 at positions 0,1,2,3,4,5,6*/

#include <stdio.h>

int fib(int n) 
{
    // Base cases: fib(0) = 0, fib(1) = 1
    if (n <= 1) {
        return n;
    }
    
    // Recursive step: F(n) = F(n-1) + F(n-2)
    return fib(n - 1) + fib(n - 2);
}

int main() 
{
    int n;
    
    // Taking input from the user
    if (scanf("%d", &n) == 1) {
        printf("%d\n", fib(n));
    }
    
    return 0;
}