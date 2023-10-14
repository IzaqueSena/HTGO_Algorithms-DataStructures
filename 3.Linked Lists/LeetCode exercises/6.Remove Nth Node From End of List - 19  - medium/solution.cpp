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

// 18min
// 3n time == [O(n) time], O(1) space
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *reversedList = reverseList(head), *prevNode = nullptr, *removedNode = reversedList;
        for (int i = 1; removedNode != nullptr && i < n; i++, prevNode = removedNode, removedNode = removedNode->next) {}
        if (removedNode == nullptr) {

        } else if (prevNode == nullptr) {
            reversedList = removedNode->next;
        } else {
            prevNode->next = removedNode->next;
        }
        head = reverseList(reversedList);
        return head;
    }
};