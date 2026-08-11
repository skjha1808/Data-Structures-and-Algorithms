#include<bits/stdc++.h>
using namespace std;

 
int main() {

    // Neither stack nor queue supports: Indexing, Iterators, & Range-based loop.
    // There is no any direct function exists to access the bottom element of stack and priority queue 

    // Stack: LIFO
    // syntax: stack<datatype> stack_name;
    stack<string> st;
    st.push("shubham");
    st.push("kumar");
    st.push("jha");
    st.push("Bihar");

    cout <<"empty or not: "<< st.empty() <<endl;
    cout <<"size of stack: "<< st.size() <<endl;

    cout <<"Top element before deleteing: "<< st.top() <<endl;
    st.pop();
    cout <<"Top element after deleting: "<< st.top() <<endl;

    int number = st.size();
    for(int i=0;i<number;i++){
        cout << st.top() <<endl;
        st.pop();    // print & destroy
    }

    cout <<"empty or not: "<< st.empty() <<endl;



    // Queue: FIFO
    // syntax: queue<datatype> queue_name;
    queue<string> q;
    q.push("pragya");
    q.push("suman");
    q.push("muskan");
    q.push("kumari");

    cout <<"\nsize of queue: "<< q.size() <<endl;
    cout <<"first element: " <<q.front() <<endl;
    cout <<"last element: " <<q.back() <<endl;

    q.pop();
    cout << "Size after pop: "<< q.size() <<endl;
    cout <<"first element: " <<q.front() <<endl;

    int num = q.size();
    for(int i=0;i<num;i++){
        cout << q.front() <<endl;
        q.pop();
    }

    cout <<"empty or not: "<< q.empty() <<endl;



    // Priority_queue: Max heap (by default)
    // syntax: priority_queue<datatype> name; 
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(4);
    pq.push(2);
    pq.push(1);

    cout <<"\nSize: "<< pq.size() <<endl;
    cout <<"top element before pop: "<< pq.top() <<endl;
    pq.pop();
    cout <<"top element after pop: "<< pq.top() <<endl;

    int n = pq.size();
    cout << "Print elements: ";
    for(int i=0;i<n;i++){
        cout << pq.top() <<" ";
        pq.pop();
    } cout <<endl;

    cout <<"EMPTY OR NOT: "<< pq.empty() <<endl;  
    

    // Min heap:
    // Syntax: priority_queue<datatype, container, comparator> name;
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(3);
    mini.push(5);
    mini.push(4);
    mini.push(2);
    mini.push(1);

    cout <<"\nSize: "<< mini.size() <<endl;
    cout <<"top element before pop: "<< mini.top() <<endl;
    mini.pop();
    cout <<"top element after pop: "<< mini.top() <<endl;

    int l = mini.size();
    cout << "Print elements: ";
    for(int i=0;i<l;i++){
        cout << mini.top() <<" ";
        mini.pop();
    } cout <<endl;

    cout <<"Empty or not: "<< mini.empty() <<endl;   



    // Set: it stores unique values in sorted order
    // Syntax: set<datatype> set_name;
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(9);
    s.insert(7);
    s.insert(7);
    s.insert(1);

    cout <<"\nSize: "<< s.size() <<endl;
    cout <<"Empty or not: "<< s.empty() <<endl;
    cout <<"print elements: ";
    for(int i:s){
        cout << i <<" ";
    } cout <<endl;

    cout <<"present or not: "<< s.count(5) <<endl;
    s.erase(5);
    cout <<"Print elements after delete: ";
    for(auto i:s){
        cout << i <<" ";
    } cout <<endl;

    cout <<"present or not: "<< s.count(5) <<endl;

    // s.find(5);
    if(s.find(5) != s.end()){
        cout << "Element found";
    } else cout <<"Element not found!" <<endl;


    // unordered_set: it stores unique values but in random manner
    // Syntax: unordered_set<int> name;
    unordered_set<int> us;
    us.insert(5);
    us.insert(5);
    us.insert(3);
    us.insert(3);
    us.insert(2);
    us.insert(9);
    us.insert(7);
    us.insert(7);
    us.insert(1);

    cout <<"\nSize: "<< us.size() <<endl;
    cout <<"Empty or not: "<< us.empty() <<endl;
    cout <<"print elements: ";
    for(int i:us){
        cout << i <<" ";
    } cout <<endl;

    cout <<"present or not: "<< us.count(5) <<endl;
    us.erase(3);
    cout <<"Print elements after delete: ";
    for(auto i:us){
        cout << i <<" ";
    } cout <<endl;

    cout <<"present or not: "<< s.count(3) <<endl;

    // s.find(3);
    if(us.find(3) != us.end()){
        cout << "Element found";
    } else cout <<"Element not found!" <<endl;



    // Map: it stores the elements as key-value pair & in sorted order
    // syntax: map<key_type, value_type> map_name;
    map<int, string> m;
    m[1] = "shubham";
    m.insert({12,"jha"});
    m[3] = "kumar";
    m[5] = "18";

    cout <<"\nPrint in pair: " <<endl;
    for(auto i:m){
        cout << i.first << " -> " << i.second <<endl;
    }

    cout <<"Access element: " << m[3] <<endl;
    cout <<"Check existence: " << m.count(12) <<endl;
    m.erase(12);
    cout <<"Print after delete: " <<endl;
    for(auto i:m){
        cout << i.first << " -> " << i.second <<endl;
    }

    if(m.find(12) != m.end()){
        cout << "Found " <<endl;
    } else cout << "Not found! " <<endl;



    // unordered_map: stores in key-value pair but in random order
    // syntax: unordered_map<key_type, value_type> um;
    unordered_map<int, string> um;
    um[1]="muskan";
    um.insert({5,"kumari"});
    um[3]="pragya";
    um[2]="suman";

    // traverse (in random manner)
    cout <<"\nPrint elements: " <<endl;
    for(auto i:um){
        cout << i.first << " -> " << i.second <<endl;
    }

    cout <<"Access element: " << um[3] <<endl;
    cout <<"Check existence: " << um.count(12) <<endl;
    um.erase(2);
    cout <<"Print after delete: " <<endl;
    for(auto i:um){
        cout << i.first << " -> " << i.second <<endl;
    }

    if(um.find(1) != um.end()){
        cout << "Found " <<endl;
    } else cout << "Not found! " <<endl;


    return 0;
}