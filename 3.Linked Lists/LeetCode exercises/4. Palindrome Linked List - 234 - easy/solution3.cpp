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

int getSize(ListNode *head) {
    int size = 0;
    for (auto ptr = head; ptr != nullptr; ptr = ptr->next) {
        size++;
    }
    return size;
}

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

// 11min
// 2.5n time, O(1) space
// 162ms 114.8 MB
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int middleIndex = getSize(head)/2;
        ListNode *middleNode = head;
        for (int i = 0; i != middleIndex; i++, middleNode = middleNode->next) {}
        ListNode *headReversedList = reverseList(middleNode);
        for (int i = 0; i < middleIndex; i++) {
            if (head->val != headReversedList->val) {
                return false;
            }
            head = head->next;
            headReversedList = headReversedList->next;
        }
        return true;
    }
};