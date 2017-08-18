//https://leetcode.com/problems/linked-list-cycle/description/
//Given a linked list, determine if it has a cycle in it.


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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=fast){
            if(fast == nullptr || fast->next == nullptr) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};

//SIMILAR METHOD

  bool containsCycle(const LinkedListNode* firstNode)
{
    // start both runners at the beginning
    const LinkedListNode* slowRunner = firstNode;
    const LinkedListNode* fastRunner = firstNode;

    // until we hit the end of the list
    while (fastRunner != nullptr && fastRunner->next_) {
        slowRunner = slowRunner->next_;
        fastRunner = fastRunner->next_->next_;

        // case: fastRunner is about to "lap" slowRunner
        if (fastRunner == slowRunner) {
            return true;
        }
    }

    // case: fastRunner hit the end of the list
    return false;
}
