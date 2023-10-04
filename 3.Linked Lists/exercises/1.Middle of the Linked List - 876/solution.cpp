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

// get size.
// iterate until size/2

int getSize(ListNode *head) {
    int size = 0;
    for (auto ptr = head; ptr != nullptr; ptr = ptr->next) {
        size++;
    }
    return size;
}

// 8min
// n + n/2 = O(n) time O(1) space
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = getSize(head);
        int middleIndex = size / 2;
        ListNode *middleNode = head;
        for (int i = 0; middleNode != nullptr && i < middleIndex; i++, middleNode = middleNode->next) {}
        return middleNode;
    }
};