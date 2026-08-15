#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    reverse(arr, l+1, r-1);
}

void rev(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(arr,i+1,n);
}

int main() {

    int n=5;
    int arr[] = {1,2,3,4,5};

    // call functions
    reverse(arr, 0, n-1);
    cout << "Reverse: ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;


    rev(arr,0,n);
    cout << "Reverse of array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}