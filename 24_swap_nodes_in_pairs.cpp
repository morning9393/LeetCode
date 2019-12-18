/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    ListNode *first = new ListNode(0);
    ListNode *second;
    first->next = head;
    head = first;

    while (first->next != NULL && first->next->next != NULL){
        second = first->next->next;
        first->next->next = second->next;
        second->next = first->next;
        first->next = second;
        first = first->next->next;
    }

    return head->next;
    }
};