#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;        // value, in thix ecample int type
    ListNode *next; // a pointer to next element in the list
};

bool hasCycle(ListNode *head) {
    if (head == nullptr) {
        return false;
    }

    ListNode *slowPointer = head;
    ListNode *fastPointer = head->next;

    while (slowPointer != nullptr && fastPointer != nullptr) {
        if (slowPointer == fastPointer) {
            return true;
        }
        slowPointer = slowPointer->next;
        if (fastPointer->next != nullptr) {
            fastPointer = fastPointer->next->next;
        } else {
            fastPointer = nullptr;
        }
        
    }
    return false;
}