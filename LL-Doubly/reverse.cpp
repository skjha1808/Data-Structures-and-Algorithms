#include<bits/stdc++.h>
using namespace std;

// Node Class for Doubly LL:
class node {
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        prev = NULL;
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

// Function to reverse doubly linked list:
void reverseLL(node* &head, node* &tail){

    node* curr = head;
    node* oldHead = head;

    while(curr != NULL){

        node* next = curr->next;

        curr->next = curr->prev;
        curr->prev = next;

        curr = next;
    }

    // Swap head and tail
    head = tail;
    tail = oldHead;
}

int main(){

    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);

    n1->next = n2;

    n2->prev = n1;
    n2->next = n3;

    n3->prev = n2;

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