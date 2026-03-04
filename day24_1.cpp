#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* deleteKey(Node* head, int key) {
    if (head == NULL)
        return NULL;

    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;  
        return head;
    }

    Node* curr = head;
    while (curr->next != NULL && curr->next->data != key) {
        curr = curr->next;
    }

    if (curr->next != NULL) {
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;   
    }

    return head;
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* newNode = new Node(x);

        if (head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int key;
    cin >> key;
    head = deleteKey(head, key);
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}