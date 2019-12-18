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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add_on = 0;
        ListNode* temp = new ListNode(0);
        ListNode* sum = temp;
        while(l1 != NULL || l2 != NULL || add_on == 1){
            temp->next = new ListNode(0);
            temp = temp->next;
            int temp_sum = 0;
            if(l1 ==NULL && l2 == NULL){
                temp_sum = add_on;
            }else if(l1 == NULL){
                temp_sum = l2->val + add_on;
                l2 = l2->next;
            }else if(l2 == NULL) {
                temp_sum = l1->val + add_on;
                l1 = l1->next;
            }else {
                temp_sum = l1->val + l2->val + add_on;
                l1 = l1->next;
                l2 = l2->next;
            }
            if(temp_sum > 9){
                add_on = 1;
                temp->val = temp_sum-10;
            }else{
                add_on = 0;
                temp->val = temp_sum;
            }
        }
        return sum->next;
    }
};