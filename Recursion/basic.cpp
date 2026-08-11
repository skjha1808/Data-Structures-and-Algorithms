#include<bits/stdc++.h>
using namespace std;

// Recursion -> when a function calls itself until a specific condition is met

// indefinitely printing
void fun(){
    cout << 1 << " ";
    fun();
}

void print(int n){
    cout << n << " ";
    print(n + 1);
}

// Printing with Base Case
int cnt=0;
void counting(){
    if(cnt == 10) return;

    cout << cnt << " ";
    cnt++;
    
    counting();
}

void printing(int n){
    // Base condition
    if(n > 10) return;

    // print 
    cout << n << " ";

    // Recursive call
    printing(n + 1);
}

void reverse(int n){
    if(n==0) return;
    cout << n << " ";
    reverse(n-1);
}



int main() {
    // function call:
    // fun();
    // print(1);

    counting();
    cout<<endl;

    printing(1);
    cout<<endl;

    reverse(10);

    return 0;
}