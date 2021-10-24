//  Fibonacci Number
// https://leetcode.com/problems/fibonacci-number/

#include<bits/stdc++.h>
using namespace std;

// Method 1 Time Complexity O(2^N)

// int fib(int n) {
//     if(n == 0)
//         return 0;
//     if(n == 1)
//         return 1;
//     return fib(n-1) + fib(n-2);        
// }


// Method 2
int fib(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    int a = 0  , b = 1 , sum = a + b;

    while (n > 1)
    {
        sum = a+ b;
        a = b , b = sum;
        n--;
    }
    return sum;
}

int main(){
    cout << fib(7);
    return 0;
}