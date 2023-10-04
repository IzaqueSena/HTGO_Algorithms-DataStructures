
#include <iostream>
#include <vector>
using namespace std;

//7min 31ms 26.6MB
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> out;
        int n = size(nums);
        int r = k % n;
        for (int i = n - r; i < n; i++) {
            out.push_back(nums[i]);
        }
        for (int i = 0; i < n - r; i ++) {
            out.push_back(nums[i]);
        }
        nums = out;
    }
};

// 7min

// ex: [1, 2, 3, 4, 5, 6, 7] k = 3
// out: [5, 6, 7, 1, 2, 3, 4]

// solution1
// [5, 6, 7]
// [5, 6, 7, 1, 2, 3, 4]
// algorithm:
// out vector
// for i=n-k, i < size, i++
//     append to out vector
// for i=0; i < n-k; i++
//     append to out vector
// return out

// O(n) time
// O(n) space