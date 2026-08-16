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

// function to print subsequence sum equal target
void printF(vector<int> &arr, int ind, vector<int> &temp, int target, int sum){

    if(ind==arr.size()){
        if(sum==target){
            for(auto x:temp){
                cout << x <<" ";
            }
            cout << endl;
        }
        return;
    }

    // index taken
    temp.push_back(arr[ind]);
    sum += arr[ind];
    printF(arr, ind+1, temp, target, sum);
    
    // index not taken
    sum -= arr[ind];
    temp.pop_back();
    printF(arr, ind+1, temp, target, sum);
}


int main() {

    sumofN(1,0);

    cout << "Sum of N: " << sumOfN(10) <<endl;


    vector<int> arr = {1,2,1};
    vector<int> temp;
    int target=2;
    // call
    printF(arr, 0, temp, target, 0);

    return 0;
}