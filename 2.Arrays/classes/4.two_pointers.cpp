#include <iostream>
using namespace std;


bool isPalindrome(string &word) {
    for (int i = 0, j = size(word) - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    string test_cases[] = {"arara", "aaa", "abccba", "", "xyyzyx"};
    bool expected_outputs[] = {true, true, true, true, false};
    for (int i = 0; i < size(test_cases); i++) {
        cout << "test: " << test_cases[i] << endl;
        cout << "result: " << isPalindrome(test_cases[i]) << endl;
        cout << "expected: " << expected_outputs[i] << endl;
        cout << endl;
    }
    return 0;
}