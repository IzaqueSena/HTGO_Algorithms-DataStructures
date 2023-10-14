#include <string>
using namespace std;

bool isPalindrome(string& s, int ini, int end) {
    for (int i = ini, j = end; i < j; i++, j--) {
        if(s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

// 17min; 88ms; 11.7MB  
// O(n²) time; O(1) space 
class Solution {
public:
    string longestPalindrome(string s) {
        int max;
        string maxPalindrome;
        if (size(s) > 0) {
            max = 1;
            maxPalindrome.push_back(s[0]);
        }
        for (int i = 0; i < size(s); i++) {
            for (int j = i + max; j < size(s); j++) {
                if (s[j] == s[i]) {
                    if (isPalindrome(s, i, j)) {
                        max = j - i + 1;
                        maxPalindrome = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return maxPalindrome;
    }
};