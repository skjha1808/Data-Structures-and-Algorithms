#include<bits/stdc++.h>
using namespace std;

// print name 5 times
void name(int i, int n){
    if(i>n) return;
    cout << "Shubham" <<" ";
    name(i+1,n);
}

// print 1 to N
void print(int i, int n){
    if(i>n) return;
    cout << i << " ";
    print(i+1, n);
}

// print N to 1
void reverse(int i, int n){
    if(i<1) return;
    cout << i << " ";
    reverse(i-1,n);
}

// Note: If a parameter is not used in the function's logic/base condition, it is an unnecessary parameter and can be removed.

// print 1 to N by Backtracking
void printing(int i){
    if(i<1) return;
    printing(i-1);
    cout << i << " ";
}

// print N to 1 by Backtracking
void reverseprint(int i, int n){
    if(i>n) return;
    reverseprint(i+1,n);
    cout << i << " ";
}

int main() {

    // function call:
    name(1,5);
    cout <<endl;

    print(1,10);
    cout <<endl;

    reverse(10,10);
    cout <<endl;

    printing(10);
    cout <<endl;

    reverseprint(1,10);


    return 0;
}