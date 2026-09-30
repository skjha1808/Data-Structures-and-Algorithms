#include<bits/stdc++.h>
using namespace std;

// Node Class for Singly LL:
class node {
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

// Function to print linked list:
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Function to reverse linked list:
void reverseLL(node* &head, node* &tail){

    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

    // Old head becomes new tail
    tail = head;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Old tail becomes new head
    head = prev;
}

int main(){

    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);

    n1->next = n2;
    n2->next = n3;

    node* head = n1;
    node* tail = n3;

    cout << "Before reverse: ";
    print(head);

    reverseLL(head, tail);

    cout << "After reverse: ";
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}