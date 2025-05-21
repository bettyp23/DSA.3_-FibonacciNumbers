#include "fibonacci.h"

// Iterative approach to computer the nth Fibonacci number
long long fib_iterative(int n){
    if (n <= 1) return n;   //base case
    long long a = 0, b = 1;

    //compute iteratively up to n
    for (int i = 2; i <= n; ++i){
        long long temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

// Recursive to compute nth Fibonacci number
long long fib_recursive(int n){
    if (n <= 1) return n;   //base case
    return fib_recursive(n-1) + fib_recursive(n-2);
}