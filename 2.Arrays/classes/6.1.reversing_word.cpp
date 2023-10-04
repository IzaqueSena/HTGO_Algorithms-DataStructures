#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Problem 1
// reversing a word (without auxiliar vector, you have to manipulate the given vector)
// ex: sachao
// oahcas

// sachao
// ^    ^
// oachas
//  ^  ^
// oachas
//   ^^
// oahcas

// for i=0, j=l-1, (i < j)
// swap(a[i], a[j])

// Swap is O(1) ok :)


void reverseWord(string &word) {
    for (int i = 0, j = size(word) - 1; i < j; i++, j--) {
        swap(word[i], word[j]);
    }
}




int main() {
    vector<string> wordTests = {"sachao", "a", "", "aab"};
    vector<string> expectedWords = {"oahcas", "a", "", "baa"};
    for (int i = 0; i < size(wordTests); i++) {
        cout << "test: " << wordTests[i];
        reverseWord(wordTests[i]);
        cout << " result: " << wordTests[i] << " expected: " << expectedWords[i] << endl;
    }
    cout << endl;
    return 0;
}