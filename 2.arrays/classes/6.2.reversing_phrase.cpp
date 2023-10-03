#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Problem2

// Reverse a phrase without using auxiliar string, you have no manipulate the given string.
// ex: "Sanchao esta na europa"
// output: "Europa na esta Sanchao"
// "Sanchao esta na europaeuropa na esta Sanchao"
//  ^
// n*O(1) + O(2n) = O(3n) =O(n) time
// O(1) space 

// algorithm
// n= size
// ini = n-1
// for i=n-1, i<0, i--
// if a[i] == " " or i == 0 {
//     a.append(a.substr(i, ini - i + 1))
//     ini = i- 1
// }
// if a[i] == " " {
//     a.append(" ")
// }
// a.erase(0, n)

void reversePhrase(string &phrase) {
    int n = size(phrase);
    int ini = n-1;
    for (int i = n-1; i >= 0; i--) {
        if (phrase[i] == ' ') {
            phrase.append(phrase.substr(i+1, ini - i));
            ini = i - 1;
            phrase.append(" ");
        } 
        if (i == 0) {
            phrase.append(phrase.substr(i, ini - i + 1));
        }
    }
    phrase.erase(0, n);
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