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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *pre = head;
        ListNode *last = head;
        for(int i = 0; i < n;i++){
            last = last->next;
        }
        if(last == NULL){
            head = head->next;
            return head;
        }
        while (last->next != NULL){
            last = last->next;
            pre = pre->next;
        }
        pre->next = pre->next->next;
        return head;
    }
};