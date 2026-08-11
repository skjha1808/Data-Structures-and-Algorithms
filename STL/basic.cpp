#include<bits/stdc++.h>
using namespace std;

 
int main() {

    // Array: Static/fixed size
    // array<datatype, size> array_name;
    array<int,5> a = {5,4,3,2,1};

    int size = a.size();
    cout << "Size of array: " << size <<endl;
    cout <<"Print array elements before sorting: ";
    for(int i=0;i<size;i++){
        cout << a[i] <<" ";
    } cout <<endl;

    sort(a.begin(), a.end());
    cout <<"Print array elements after sorting: ";
    for(int i=0;i<size;i++){
        cout << a[i] <<" ";
    } cout <<endl;

    cout <<"Element at 0th index: " << a.at(0) <<endl;
    cout <<"Element at 2nd index: " << a.at(2) <<endl;
    cout <<"Empty or not: "<< a.empty() <<endl;
    cout <<"First element: "<< a.front() <<endl;
    cout <<"Last element: "<< a.back() <<endl;
    

    cout <<endl;


    // Vector: Dynamic array
    // vector<datatype> vector_name;
    vector<int> v;
    // capacity tells that how much memory is available for elements
    cout <<"Capacity: "<<v.capacity()<<endl;
    // size tell that how much elements are available
    cout <<"Size: "<<v.size()<<endl;

    v.push_back(1);
    cout <<"Capacity: "<<v.capacity()<<endl;
    cout <<"Size: "<<v.size()<<endl;

    v.push_back(2);
    cout <<"Capacity: "<<v.capacity()<<endl;
    cout <<"Size: "<<v.size()<<endl;

    v.push_back(3);
    cout <<"Capacity: "<<v.capacity()<<endl;
    cout <<"Size: "<<v.size()<<endl;

    cout <<"Element at 2nd index: " << v.at(2) <<endl; 

    cout <<"First element: "<< v.front() <<endl;
    cout <<"Last element: "<< v.back() <<endl;
    
    cout <<"before pop: ";
    for(int i:v) {
        cout << i <<" ";
    } cout <<endl;

    v.pop_back();

    cout <<"after pop: ";
    for(int i:v) {
        cout << i <<" ";
    } cout <<endl;

    cout <<"Capacity before clear: "<< v.capacity() <<endl;
    cout <<"Size before clear: "<< v.size() <<endl;
    // clear only remove the elements from the vector & reduced size to 0
    v.clear();
    cout <<"Capacity after clear: "<< v.capacity() <<endl;
    cout <<"Size after clear: "<< v.size() <<endl;


    vector<int> w(5);     // initialize all vector elements to 0
    cout <<"print w: ";
    for(int i:w) {
        cout << i <<" ";
    } cout <<endl;

    vector<int> x(5,1);     // initialize all vector elements to 1
    cout <<"print x: ";
    for(int i:x) {
        cout << i <<" ";
    } cout <<endl;

    vector<int> y = {3,1,7,4,9,5};
    sort(y.begin(), y.end());
    cout <<"after sorting: ";
    for(int i:y) {
        cout << i <<" ";
    } cout <<endl;

    // int x → Variable to store each element
    // : v/w/x/y → Loop runs for every element in vector v/w/x/y



    // deque (double ended queue):
    // syntax: deque(datatype) deque_name;
    deque<int> d;
    d.push_front(5);
    d.push_front(6);
    cout <<"\nSize after push front: "<< d.size() <<endl;
    cout <<"front element: "<< d.front() <<endl;

    d.push_back(3);
    d.push_back(4);
    cout <<"Size after push back: " << d.size() <<endl;
    cout <<"back element: "<< d.back() <<endl;

    d.pop_back();
    cout <<"Size after pop back: " << d.size() <<endl;
     cout << "Elements: ";
    for(int i:d){
        cout << i <<" ";
    } cout <<endl;
    
    d.pop_front();
    cout <<"Size after pop front: "<< d.size() <<endl;
    cout << "Elements: ";
    for(int i:d){
        cout << i <<" ";
    } cout <<endl;

    cout <<"print element at index 1: "<< d.at(1) <<endl;

    cout <<"Empty or not: "<< d.empty() <<endl;

    cout <<"Size before erase: " << d.size() <<endl;
    cout <<"Elements present: ";
    for(int i:d){
        cout << i <<" ";
    } cout <<endl;

    // erase is used to delete the element from the memory 
    d.erase(d.begin(), d.begin()+1);
    cout <<"Size after erase: " << d.size() <<endl;
    cout <<"Remaining element(s): ";
    for(int i:d){
        cout << i <<" ";
    } cout <<endl;
    



    // list (doubly linked list):
    // direct excess is not possible in list
    list<int> ll;
    cout <<"\nSize: " << ll.size() <<endl;

    ll.push_back(10);
    cout <<"Size after push_back element: " << ll.size() <<endl;

    ll.push_front(20);
    cout <<"Size after push_front element: " << ll.size() <<endl;

    ll.insert(ll.begin(),50);
    ll.insert(ll.end(),100);
    cout <<"Print elements of list: ";
    for(int i:ll){
        cout << i <<" ";
    }cout <<endl;

    cout <<"Size before erase: "<< ll.size() <<endl;
    ll.erase(ll.begin());
    cout <<"Size after erase: " <<ll.size() <<endl;

    cout <<"Print elements of list: ";
    for(int i:ll){
        cout << i <<" ";
    }cout <<endl;
    

    return 0;
}



// NOTES:
// STL : Standard Template Library -> 4 components:
// 1. Algorithms: 
// 2. Containers: Used to store data
// 3. Iterators: Used to traverse containers
// 4. Functors:

// Containers: Store data, mainly 4 types ->
// 1. Sequence: Data is stored sequentially -> array, vector, deque, list, forward_list
// 2. Associative: stored in sorted order -> set, map, multiset, multimap
// 3. Unordered: Implemented using Hash Table -> unordered_set, unordered_map, unordered_multiset, unordered_multimap
// 4. Container Adaptor: Built using other containers -> stack, queue, priority_queue
