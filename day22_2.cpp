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

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* nextNode = curr->next; 
        curr->next = prev;               
        prev = curr;                     
        curr = nextNode;                 
    }
    return prev; 
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

    head = reverseList(head);
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}