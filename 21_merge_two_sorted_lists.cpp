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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *begin = new ListNode(0);
        ListNode *temp = begin;
        while(l1 != NULL && l2 != NULL){
            if(l1->val > l2->val){
                temp->next = l2;
                l2 = l2->next;
            }else{
                temp->next = l1;
                l1 = l1->next;
            }
            temp = temp->next;
        }
        if(l1 == NULL){
            temp->next = l2;
        }else if(l2 == NULL){
            temp->next = l1;
        }
        return begin->next;
    }
};