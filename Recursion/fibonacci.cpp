#include<bits/stdc++.h>
using namespace std;

// Recursive
// T.C. = O(2^N) -> exponential
int fib(int n){
    if(n<=1) return n;

    return fib(n-1) + fib(n-2);
}

// iterative
int fibo(int n){
    if(n<=1) return n;
    int a=0, b=1;
    for(int i=2;i<=n;i++){
        int curr = a+b;
        a=b;
        b=curr;
    }
    return b;
}


int main() {
    int n=10;

    cout << "Nth Fibonacci: " <<fib(n) <<endl;
    cout << "Fibonacci No: " << fibo(n);

    return 0;
}