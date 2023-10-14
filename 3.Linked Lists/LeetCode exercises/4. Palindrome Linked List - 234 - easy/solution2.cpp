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

// 1.5n time, n space.
// 188ms 128.7MB
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listVector;  
        for (auto node = head; node != nullptr; node = node->next) {
            listVector.push_back(node->val);
        }
        for (int i = 0, j = listVector.size() - 1; i < j; i++, j--) {
            if (listVector[i] != listVector[j]) {
                return false;
            }
        }
        return true;
    }
};