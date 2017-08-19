//https://leetcode.com/problems/add-two-numbers/description/
/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

*/

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
        int sum = 0;
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        ListNode* s = new ListNode(0);
        ListNode* d = s;
        while(c1 != nullptr || c2 != nullptr) {
            sum = sum/10;
            if(c1!=nullptr){
                sum = sum + c1->val;
                c1=c1->next;
            }
            if(c2!=nullptr){
                sum = sum + c2->val;
                c2=c2->next;
            }
            d->next = new ListNode(sum%10);
            d=d->next;
        }
        if((sum / 10 )== 1) { //if the sum is greater than 10, then divide that sum by 10. Create a new node if thats the case
            d->next = new ListNode(1);
        }
        return s->next;
    }
};
