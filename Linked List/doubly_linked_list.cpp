#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    // if (head == NULL) {
    //     head = newNode;
    // } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    // }
}

void insert_at_tail(Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next; // Move to the next node
    }
    cout << endl;
}

void print_backward(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev; // Move to the previous node
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insert_at_head(head, 5);
    // insert_at_tail(tail, 40);
    print_forward(head);
    print_backward(tail);

    return 0;
}
