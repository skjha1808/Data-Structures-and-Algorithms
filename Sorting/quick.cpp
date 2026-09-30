#include<bits/stdc++.h>
using namespace std;

// Partition array
int partitionArray(int arr[], int low, int high){

    int pivot = arr[high];

    int i = low - 1;

    for(int j = low; j < high; j++){

        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot at correct position
    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Quick Sort
void quickSort(int arr[], int low, int high){

    // Base case
    if(low >= high){
        return;
    }

    int pivotIndex = partitionArray(arr, low, high);

    // Sort left part
    quickSort(arr, low, pivotIndex - 1);

    // Sort right part
    quickSort(arr, pivotIndex + 1, high);
}

int main(){

    int array[] = {10, 3, 21, 6, 17, 9};
    int n = 6;

    cout << "Before sorting: ";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    quickSort(array, 0, n - 1);

    cout << "After sorting: ";
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}