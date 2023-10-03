#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
            for (int j = i + 1, k = size(nums) - 1; j < k; ) {
                if (j > i + 1 && nums[j] == nums[j-1]) {
                    j++;
                    continue;
                }
                if (k < size(nums) - 1 && nums[k] == nums[k+1]) {
                    k--;
                    continue;
                }
                if (nums[i]+nums[j]+nums[k] == 0) {
                    out.push_back(vector<int>{nums[i], nums[j], nums[k]});
                    j++;
                    k = size(nums) - 1;
                } else {
                    if (nums[i]+nums[j]+nums[k] < 0) {
                        j++;
                    } else {
                        k--;
                    }
                }

            }
        }
        return out;
    }
};