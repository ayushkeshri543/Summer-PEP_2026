
// https://leetcode.com/problems/intersection-of-two-linked-lists/

/*
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*class Solution {
public:
   int findLength(ListNode* head){
    int length = 0;
    ListNode* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
   }

   ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
    int lenA = findLength(headA);
    int lenB = findLength(headB);

    ListNode* pA = headA;
    ListNode* pB = headB;

    int diffInLength = abs(lenA - lenB);

    if(lenB>lenA){
        while(diffInLength--){
            pB = pB->next;
        }
    }
    else{
        while(diffInLength--){
            pA = pA->next;
        }
    }
    while(pA !+ pB){ 
        pA = pA->next;
        pB = pB->next;
    }
    return pA;
   }
};

*/