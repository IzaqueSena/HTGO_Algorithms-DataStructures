#include <iostream>
using namespace std;

struct ListNode {
    int val;        // value, in thix ecample int type
    ListNode *next; // a pointer to next element in the list
};

// Read
// return ptr to node at position i (0, 1, 2, ..). if length(list) < i =>  return nullptr
// O(n) time. (n=i), O(1) space
ListNode *getNode(ListNode *head, int i) {
    for (int j = 0; j < i && head != nullptr; j++) {
        head = head->next;
    }
    return head;
}

// Insert
// insert a node at position i, 0<=i<=size
// O(n) time (n=i), O(1) space
void insertNodeAt(ListNode *head, int i, int value) {
    for (int j = 0; j < i - 1 && head != nullptr; j++) {
        head = head->next;
    }

    if (head != nullptr) {
        ListNode *dummyNode = head->next;
        ListNode *newNode = new ListNode;
        head->next = newNode;
        newNode->val = value;
        newNode->next = dummyNode;
    }
}

// Insert given a node which you want to insert a new node after.
// node != nullptr
// O(1) time O(1) space
void insertNodeGivenNode(ListNode *previousNode, int value) {
    ListNode *dummyNode = previousNode->next;
    ListNode *newNode = new ListNode;
    previousNode->next = newNode;
    newNode->val = value;
    newNode->next = dummyNode;
}

// Search
// O(n) time O(1) space
// if key is not in the list return nullptr
ListNode* searchList(ListNode *head, int key) {
    for (;head != nullptr && head->val != key; head = head->next){}
    return head;
}

// Update
// O(n) time O(1) space
void updateList(ListNode *head, int oldVal, int newVal) {
    for (;head != nullptr && head->val != oldVal; head = head->next){}
    if (head != nullptr) {
        head->val = newVal;
    }
}

// Delete
// O(n) time O(1) space
void deleteValueFromList(ListNode *head, int val) {
    ListNode *headRunner = head;
    ListNode *previousNode = nullptr;
    
    while (headRunner != nullptr && headRunner->val != val) {
        previousNode = headRunner;
        headRunner = headRunner->next;
    }

    if (headRunner != nullptr) {
        previousNode->next = headRunner->next;
        free(headRunner);
    }
}

// Insert at the end given end node
// O(1) time O(1) space
ListNode* insertAtEndGivenEnd(ListNode *endNode, int value) {
    ListNode *newNode = new ListNode;
    if (endNode != nullptr) {
        endNode->next = newNode;
    }
    newNode->val = value;
    newNode->next = nullptr;
    return newNode;
}

// Printing
void printList(ListNode *head) {
    for (ListNode *ptr = head; ptr != nullptr; ptr = ptr->next) {
        cout << ptr->val << " ";
    }
    cout << endl;
}

int main() {
    int i, lista[] = {10, 9, 3, 4, 1};
    ListNode *ptr, *head = insertAtEndGivenEnd(nullptr, 10);
    for (i = 1, ptr = head; i < size(lista); i++) {
        ptr = insertAtEndGivenEnd(ptr, lista[i]);
    }
    printList(head);

    for (int i = 0; i < size(lista); i++) {
        cout << getNode(head, i)->val << " ";
    }
    cout << endl;

    cout << "inserting at i = 3" << endl;
    insertNodeAt(head, 3, 55);
    printList(head);

    cout << "inserting at second position" << endl;
    insertNodeGivenNode(head, 99);
    printList(head);

    cout << searchList(head, 4)->val << endl;

    updateList(head, 4, 8);
    printList(head);

    deleteValueFromList(head, 8);
    printList(head);
    
    return 0;
}