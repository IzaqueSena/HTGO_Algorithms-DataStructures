#include <iostream>
using namespace std;

/*  complexity analysis
    1. Acces at an index -> O(1)
    2. Seach an element -> O(n)
    3. Insertion at the end --- can't 
    4. Insertion at another position --- can't
    5. Remotion at the end --- can't
    6. Remotion at another position --- can't
*/

int main() {
    // static array - array in c++
    cout << "STATIC ARRAY" << endl;
    int array[] = {1, 2, 3, 4, 5};
    // 1. Acces at an index -> O(1)
    cout << array[2] << endl;
    // 2. Search an element -> O(n)
    for (int i = 0; i < size(array); i++) {
        if (array[i] == 3) {
            cout << i << endl;
        }
    }

    return 0;
}