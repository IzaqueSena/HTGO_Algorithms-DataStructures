
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 308/312 - Time Limit Exceeded
// O(n*logn) + O(n²) = O(n²) time
bool intcresc(int i, int j) { return (i < j); }

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        sort(nums.begin(), nums.end(), intcresc);
        for (int i = 0; i < size(nums) - 2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            for (int j = i + 1; j < size(nums) - 1; j++) {
                if (j > i + 1 && nums[j] == nums[j-1]) {
                    continue;
                }
                for (int k = j + 1; k < size(nums); k++) {
                    if (k > j + 1 && nums[k] == nums[k-1]) {
                        continue;
                    }
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        out.push_back(vector<int>{nums[i], nums[j], nums[k]});
                    }
                } 
            }
        }
        return out;
    }
};