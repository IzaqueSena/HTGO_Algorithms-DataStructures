#include <iostream>
#include <string>
using namespace std;

// 17min, 9ms, 7.5MB
class Solution {
public:
    bool isPalindrome(string s) {
        int n = size(s) - 1;
        for (int i = 0, j = n; i < j; i++, j--) {
            while ((i < j) && !iswalnum(s[i])) {
                i++;
            }
            while ((i < j) && !iswalnum(s[j])) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
        }
        return true;
    }
};

// solution 1 
// remove charcaters, verify is palindrom
// O(n) + O(n) = O(2n)

// solution 2
// verifying is a palindro m in one iteration
// O(n) = O(1n) time, O(1) space

// algorithm:
// for i = 0, j = n - 1; i < j; i++, j--
//     if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
