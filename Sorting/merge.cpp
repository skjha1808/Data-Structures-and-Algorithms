#include<bits/stdc++.h>
using namespace std;

// Merge two sorted parts
void mergeArray(int arr[], int low, int mid, int high){

    vector<int> temp;

    int i = low;
    int j = mid + 1;

    while(i <= mid && j <= high){

        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining elements of left part
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining elements of right part
    while(j <= high){
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back
    for(int k = 0; k < temp.size(); k++){
        arr[low + k] = temp[k];
    }
}

// Merge Sort
void mergeSort(int arr[], int low, int high){

    // Base case
    if(low >= high){
        return;
    }

    int mid = low + (high - low) / 2;

    // Sort left half
    mergeSort(arr, low, mid);

    // Sort right half
    mergeSort(arr, mid + 1, high);

    // Merge both sorted halves
    mergeArray(arr, low, mid, high);
}

int main(){

    int array[] = {10, 3, 21, 6, 17, 9};
    int n = 6;

    cout << "Before sorting: ";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    mergeSort(array, 0, n - 1);

    cout << "After sorting: ";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}