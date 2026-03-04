#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* removeElements(ListNode* head, int val) {
    while (head != NULL && head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    ListNode* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->next->val == val) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }

    return head;
}

int main() {
    int n;
    cin >> n;

    ListNode* head = NULL;
    ListNode* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);

        if (head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int val;
    cin >> val;

    head = removeElements(head, val);
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}