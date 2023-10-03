#include <iostream>
#include <string>
using namespace std;

/*  complexity analysis
    1. Acces at an index -> O(1) 
    2. Search an substring -> O(n) 
    3. Insertion at the end -> O(1)
    4. Insertion at another position -> O(n)
    5. Remotion at the end -> O(1)
    6. Remotion at another position -> O(n)
    7. Replacing -> O(n) n is the length of new string
    8. Slicing -> O(n) n is the length o substring
*/

int main() {
    // string - array of characters
    cout << "STRING" << endl;
    string str = "abcdefghij";
    cout << str << endl;
    // 1. Acces at an index -> O(1)
    cout << str[2] << endl;
    // 2. Search an element -> O(n)
    if (str.find("def") != string::npos) {
        cout << "def is at " << str.find("def") << " in " + str << endl;
    } else {
        cout << "def is not at" << str << endl;
    }
    // 3. Insertion at the end -> O(1) (one charcter)
    str.push_back('E');
    for (int i = 0; i < size(str); i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    // 3. Insertion at the end -> O(m) (another string), if m << n => O(1)
    str.append("aaaa");
    for (int i = 0; i < size(str); i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    // 4. Insertion at another position -> O(n)
    str.insert(2, "AAA");
    for (int i = 0; i < size(str); i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    // 5. Remotion at the end -> O(1)
    str.pop_back();
    for (int i = 0; i < size(str); i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    // 6. Remotion at another position -> O(n)
    str.erase(2, 2);
    for (int i = 0; i < size(str); i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    // 7. Replacing -> O(n)
    str.replace(3, 4, "GOOD");
    for (int i = 0; i < size(str); i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    // 8. Slicing -> O(n)
    string sub = str.substr(3, 5);
    cout << sub << endl;


    return 0;
}