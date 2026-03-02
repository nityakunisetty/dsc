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
    ListNode *prev =NULL;
    
    while (head) {
        ListNode* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    
    return prev;
}

ListNode* reverseHalf(ListNode* head) {
    if (!head) return head;

    ListNode *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow = reverseList(slow);

    ListNode* temp = head;
    while (temp->next && temp->next != slow)
        temp = temp->next;

    temp->next = slow;

    return head;
}
