#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Problem2

// Reverse a phrase without using auxiliar string, you have no manipulate the given string.
// ex: "sanchao esta na europa"
// output: "europa na esta sanchao"
// "sanchao esta na europa"
// "aporue an atse oahcnas"
// "europa na esta sanchao"
// invert all phrase -> O(n) time
// invert each word -> O(m) for each word of size m, 2m1 + 2m2, .., 2mk = 2(m1+m2+...mk) = 2n
// so O(n) + O(2n) = O(3n) = O(n) time
// O(1) space

// alorithm
// reverse all sentence
// -
// ini = 0
// for i=0; i < size; i++
//     if a[i] == ' '
//         reverseWord(sentence, ini, i - 1)
//         ini = i + 1
//     if i == size - 1
//         reverseWord(sentence, ini, i)
// -- end

void reverseWord(string &word, int ini, int end) {
    for (int i = ini, j = end; i < j; i++, j--) {
        swap(word[i], word[j]);
    }
}

void reversePhrase(string &phrase) {
    reverseWord(phrase, 0, size(phrase) - 1);
    int n = size(phrase);
    for (int i = 0, ini = 0; i < n; i++) {
        if (phrase[i] == ' ') {
            reverseWord(phrase, ini, i - 1);
            ini = i + 1;
        }
        if (i == n - 1) {
            reverseWord(phrase, ini, i);
        }
    }
}


int main() {
    vector<string> wordTests = {"sanchao esta na europa", "a", "", " "};
    vector<string> expectedWords = {"europa na esta Sanchao", "a", "", " "};
    for (int i = 0; i < size(wordTests); i++) {
        cout << "test: " << wordTests[i];
        reversePhrase(wordTests[i]);
        cout << " result: " << wordTests[i] << " expected: " << expectedWords[i] << endl;
    }
    cout << endl;
    return 0;
}