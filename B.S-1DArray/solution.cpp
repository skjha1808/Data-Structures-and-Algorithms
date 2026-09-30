#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] > mid){
            return false;
        }

        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            pageSum = arr[i];

            if(studentCount > m){
                return false;
            }
        }
    }

    return true;
}

int allocateBook(int arr[], int n, int m){

    if(m > n){
        return -1;
    }

    int low = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int high = sum;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(isPossible(arr, n, m, mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){

    int array[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;

    cout << "Minimum max. pages: "
         << allocateBook(array, n, m) << endl;

    return 0;
}