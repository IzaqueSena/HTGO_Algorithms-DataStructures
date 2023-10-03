#include <iostream>
#include <vector>
using namespace std;

/*  complexity analysis
    1. Acces at an index -> O(1)
    2. Seach an element -> O(n)
    3. Insertion at the end -> O(1)
    4. Insertion at another position -> O(n)
    5. Remotion at the end -> O(1)
    6. Remotion at another position -> O(n)
*/

int main() {
    // dynamic array - vector in c++
    cout << "DYNAMIC ARRAY" << endl;
    vector<int> vec;
    for (int i = 1; i < 6; i ++) {
        vec.push_back(i);
    }
    // 1. Acces at an index -> O(1)
    cout << vec[2] << endl;
    // 2. Search an element -> O(n)
    for (int i = 0; i < size(vec); i++) {
        if (vec[i] == 3) {
            cout << i << endl;
        }
    }
    // 3. Insertion at the end -> O(1)
    vec.push_back(0);
    for (int i = 0; i < size(vec); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    // 4. Insertion at another position -> O(n)
    vec.insert(vec.begin() + 2, 1, 100);
    for (int i = 0; i < size(vec); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    // 5. Remotion at the end -> O(1)
    vec.pop_back();
    for (int i = 0; i < size(vec); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    // 6. Remotion at another position -> O(n)
    vec.erase(vec.begin() + 2);
    for (int i = 0; i < size(vec); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;


    return 0;
}