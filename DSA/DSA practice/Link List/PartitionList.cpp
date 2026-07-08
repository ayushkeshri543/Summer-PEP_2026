// https://leetcode.com/problems/partition-list/

/*
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(-1);
        ListNode* right = new ListNode(-1); 

        ListNode* lp = left;
        ListNode* rp = right;
        ListNode* temp = head;

        while(temp != NULL){
            if(temp->val<x){
                left->next = temp;
                left = left->next;
            }
            else{
                right->next = temp;
                right = right->next;

            }
            temp = temp->next;
        }
        right->next = NULL;
        left->next = rp->next;

        return lp->next;
        
    }
};
*/