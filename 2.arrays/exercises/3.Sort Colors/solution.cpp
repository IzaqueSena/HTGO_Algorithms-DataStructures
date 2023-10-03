#include <map>
#include <vector>
using namespace std;

map<int, int> frequenciesMap(vector<int> a) {
    map<int, int> freq;
    for (int i = 0; i < size(a); i++) {
        if (freq.find(a[i]) != freq.end()) {
            freq[a[i]]++;
        } else {
            freq[a[i]] = 1;
        }
    }
    return freq;
}

class Solution {
public:
    void sortColors(vector<int>& nums) {
        auto freqMap = frequenciesMap(nums);
        int count = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; freqMap.find(i) != freqMap.end() && j < freqMap[i]; j++) {
                nums[count] = i;
                count++;
            }
        }
    }
};

// O(n) + O(n) = O(2n) = O(n) time
// O(6) = O(1) space
