#include<bits/stdc++.h>
using namespace std;

void printF(vector<int> &arr, int ind, vector<int> &temp) {
    
    if(ind==arr.size()){
        for(auto x:temp){
            cout << x << " ";
        }
        if(temp.size()==0){
            cout<< "{}";
        }
        cout <<endl;
        return;
    }

    // index taken
    temp.push_back(arr[ind]);
    printF(arr, ind+1, temp);

    // index not taken
    temp.pop_back();
    printF(arr, ind+1, temp);
}


int main() {
    vector<int> arr = {1,2,3};
    vector<int> temp;

    printF(arr, 0, temp);

    return 0;
}