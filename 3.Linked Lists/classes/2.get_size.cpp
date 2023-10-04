#include <iostream>
using namespace std;

struct ListNode {
    int val;        // value, in thix ecample int type
    ListNode *next; // a pointer to next element in the list
};

int Size(ListNode *head) {
    int size = 0;
    for (auto ptr = head; ptr != nullptr; ptr=ptr->next) {
        size++;
    }
    return size;
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
    int i, lista[] = {10, 9, 3, 4, 1};
    ListNode *ptr, *head = insertAtEndGivenEnd(nullptr, 10);
    for (i = 1, ptr = head; i < size(lista); i++) {
        ptr = insertAtEndGivenEnd(ptr, lista[i]);
    }
    int size = Size(head);
    cout << size << endl;
    return 0;
}