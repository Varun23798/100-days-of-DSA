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

Node* mergeLists(Node* head1, Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node* result = NULL;

    if (head1->data <= head2->data) {
        result = head1;
        head1 = head1->next;
    } else {
        result = head2;
        head2 = head2->next;
    }

    Node* temp = result;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            temp->next = head1;
            head1 = head1->next;
        } else {
            temp->next = head2;
            head2 = head2->next;
        }
        temp = temp->next;
    }

    if (head1 != NULL)
        temp->next = head1;
    else
        temp->next = head2;

    return result;
}

int main() {
    int n, m;

    cin >> n;
    Node* head1 = NULL;
    Node* tail1 = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* newNode = new Node(x);

        if (head1 == NULL)
            head1 = tail1 = newNode;
        else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    cin >> m;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        Node* newNode = new Node(x);

        if (head2 == NULL)
            head2 = tail2 = newNode;
        else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    Node* mergedHead = mergeLists(head1, head2);
    while (mergedHead != NULL) {
        cout << mergedHead->data << " ";
        mergedHead = mergedHead->next;
    }

    return 0;
}