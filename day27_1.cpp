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

Node* findIntersection(Node* head1, Node* head2) {
    if (head1 == NULL || head2 == NULL)
        return NULL;

    Node* p1 = head1;
    Node* p2 = head2;

    while (p1 != p2) {
        if (p1 == NULL)
            p1 = head2;
        else
            p1 = p1->next;

        if (p2 == NULL)
            p2 = head1;
        else
            p2 = p2->next;
    }

    return p1; 
}

int main() {
    int n, m;

    // First List
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

    Node* result = findIntersection(head1, head2);

    if (result != NULL)
        cout << result->data;
    else
        cout << "No Intersection";

    return 0;
}