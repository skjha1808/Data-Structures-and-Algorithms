#include<bits/stdc++.h>
using namespace std;

// Parameterized
void sumofN(int i, int sum) {
    if(i>5){
        cout << "Sum: " << sum <<endl;
        return;
    }
    sumofN(i+1,sum+i);
}

// Functional
int sumOfN(int n){
    if(n==0) return 0;

    return n + sumOfN(n-1);
}


int main() {
    sumofN(1,0);

    cout << "Sum of N: " << sumOfN(10) <<endl;

    return 0;
}