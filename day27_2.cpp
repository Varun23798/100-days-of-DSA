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

bool removeCycle(Node* head) {
    if (head == NULL || head->next == NULL)
        return false;

    Node* slow = head;
    Node* fast = head;

    bool hasCycle = false;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            hasCycle = true;
            break;
        }
    }

    if (!hasCycle)
        return false;

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    Node* temp = slow;
    while (temp->next != slow) {
        temp = temp->next;
    }
    temp->next = NULL;

    return true;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next;

    if (removeCycle(head))
        cout << "true";
    else
        cout << "false";

    return 0;
}