/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// 30min
// O(n) time e O(1) space
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *prevPtr = new ListNode, *currPtr = head, *nextPtr;
        if (head == nullptr) {   
        } else if (head->next == nullptr){
            nextPtr = nullptr;
        } else {
            nextPtr = currPtr->next;
            head = nextPtr;
        }
        while (currPtr != nullptr && nextPtr != nullptr) {
            currPtr->next = nextPtr->next;
            nextPtr->next = currPtr;
            prevPtr->next = nextPtr;
            prevPtr = currPtr;
            currPtr = currPtr->next;
            if (currPtr != nullptr) {
                nextPtr = currPtr->next;
            }
        }
        return head;
    }
};