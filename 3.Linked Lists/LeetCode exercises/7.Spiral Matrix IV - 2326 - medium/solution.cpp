#include <limits.h>
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

// 1hr
// O(mxn) time, O(1) space
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix;
        for (int i = 0; i < m; i++) {
            vector<int> line;
            for (int j = 0; j < n; j++) {
                line.push_back(INT_MIN);
            }
            matrix.push_back(line);
        }
        int mode = 1; // to right
        int i = 0, j = 0;
        for (;i >= 0 && i < m && j >= 0 && j < n;) {
            if (matrix[i][j] != INT_MIN){
                break;
            } 
            if (mode == 1) {
                while (j < n && matrix[i][j] == INT_MIN) {
                    if (head == nullptr) {
                        matrix[i][j] = -1;
                    } else {
                        matrix[i][j] = head->val;
                        head = head->next;
                    }
                    j++;
                }
                j--;
                i++;
                mode = 3;
            } else if (mode == 2) {
                while (j >= 0 && matrix[i][j] == INT_MIN) {
                    if (head == nullptr) {
                        matrix[i][j] = -1;
                    } else {
                        matrix[i][j] = head->val;
                        head = head->next;
                    }
                    j--;
                }
                j++;
                i--;
                mode = 4;
            } else if (mode == 3) {
                while (i < m && matrix[i][j] == INT_MIN) {
                    if (head == nullptr){
                        matrix[i][j] = -1;
                    } else {
                        matrix[i][j] = head->val;
                        head = head->next;
                    }
                    i++;
                }
                i--;
                j--;
                mode = 2;
            } else if (mode == 4) {
                while (i >= 0 && matrix[i][j] == INT_MIN) {
                    if (head == nullptr) {
                        matrix[i][j] = -1;
                    } else {
                        matrix[i][j] = head->val;
                        head = head->next;
                    }
                    i--;
                }
                i++;
                j++;
                mode = 1;
            } else {}
        }
        return matrix;
    }
};