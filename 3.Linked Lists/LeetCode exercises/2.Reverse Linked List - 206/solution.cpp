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

// 3min
// O(n) time O(1) space
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *currentNode = head, *previousNode = nullptr, *nextNode;
        while (currentNode != nullptr) {
            nextNode = currentNode->next;
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = nextNode;
        }
        return previousNode;        
    }
};