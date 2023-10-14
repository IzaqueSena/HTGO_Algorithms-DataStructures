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

// 18min
// 2n time e n/2 space.
// 188ms, 118.5MB
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int size = getSize(head);
        int middleIndex = size/2;
        int firstHalf[middleIndex+1], i;
        ListNode *node = head;
        for (i = 0; node != nullptr && i < middleIndex; i++, node = node->next) {
            firstHalf[i] = node->val;
        }
        if (size % 2 != 0) {node = node->next;}
        for (i = i - 1; node != nullptr && i >=0; i--, node = node->next) {
            if (firstHalf[i] != node->val) {
                return false;
            }
        }
        return true;
    }
};