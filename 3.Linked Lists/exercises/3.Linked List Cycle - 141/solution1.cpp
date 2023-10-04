#include <unordered_map>
#include <string>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


// for each node
//     verify if address is in map
//     if yes {
//         return yes
//     }
//     save the addres in map
// return no

// 8min
// O(n) time O(n) space
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> addresses;
        for(auto ptr = head; ptr != nullptr; ptr = ptr->next) {
            if (addresses.find(ptr) == addresses.end()) {
                addresses[ptr]++;
            } else {
                return true;
            }
        }
        return false;
    }
};