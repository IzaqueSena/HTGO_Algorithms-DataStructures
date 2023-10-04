#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;        // value, in thix ecample int type
    ListNode *next; // a pointer to next element in the list
};

// Given a Linked List reverse it, and returs the new head
// O(n) time O(1) space
ListNode* reverseList(ListNode *head) {
    ListNode *currentNode = head, *previousNode =nullptr, *nextNode;
    while (currentNode != nullptr) {
        nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    return previousNode;
}

void printList(ListNode *head) {
    for (ListNode *ptr = head; ptr != nullptr; ptr = ptr->next) {
        cout << ptr->val << " ";
    }
    cout << endl;
}

ListNode* insertAtEndGivenEnd(ListNode *endNode, int value) {
    ListNode *newNode = new ListNode;
    if (endNode != nullptr) {
        endNode->next = newNode;
    }
    newNode->val = value;
    newNode->next = nullptr;
    return newNode;
}

int main() {
    vector<vector<int>> testCases = {{10, 9, 3, 4, 1}, {1, 2}, {1}};
    
    for (int i = 0; i < testCases.size(); i++) {
        ListNode *ptr, *head = insertAtEndGivenEnd(nullptr, testCases[i][0]);
        ptr = head;
        for (int j = 1; j < size(testCases[i]); j++) {
            ptr = insertAtEndGivenEnd(ptr, testCases[i][j]);
        }
        printList(head);
        head = reverseList(head);
        printList(head);
    }
    auto head = reverseList(nullptr);
    printList(head);
    return 0;
}