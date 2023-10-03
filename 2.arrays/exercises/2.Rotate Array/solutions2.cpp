#include <iostream>
#include <vector>
using namespace std;

// 15ms, 25.31MB
void reverse(vector<int> &v, int ini, int end) {
    for(int i = ini, j = end; i < j; i++, j--) {
        swap(v[i], v[j]);
    }
}

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int r = k % size(nums); 
        reverse(nums, 0, size(nums) - 1);
        reverse(nums, 0, r - 1);
        reverse(nums, r , size(nums) - 1);
    }
};

// O(n/2) + O(n/4) + O(n/4) = O(n) time
// O(1) space

