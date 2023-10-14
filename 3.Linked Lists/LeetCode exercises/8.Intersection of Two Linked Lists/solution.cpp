#include <unordered_map>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//13min
//O(n) time, O(2n) space 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *intersection = nullptr;
        unordered_map<ListNode*, int> addressesA, addressesB;
        while (headA != nullptr || headB != nullptr) {
            if (headA != nullptr) {
                addressesA[headA]++;
            }
            if (headB != nullptr) {
                addressesB[headB]++;
            }
            if (addressesA.find(headB) != addressesA.end()) {
                intersection = headB;
                break;
            }
            if (addressesB.find(headA) != addressesB.end()) {
                intersection = headA;
                break;
            }
            if (headA != nullptr) {
                headA = headA->next;
            }
            if (headB != nullptr) {
                headB = headB->next;
            }
        }
        return intersection;
    }
};