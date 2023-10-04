#include <iostream>
#include <vector>
using namespace std;

// Given an array of size n, return the maximum sum ok k consecutive elements


// ex: {1, 4, 2, -10, 0, 20}, k = 3
// {1, 4, 2} -> 7
// {4, 2, -10} -> -4
// {2, -10, 0} -> -8
// {-10, 0, 20} -> 10
// maxSum = 10

// solution 1 
// i from 0 to  i = n - k - 1
//     sum := arr[i]
//     j from 1 to i = k - 1
//         sum += arr[j]

// O((n-k+1)*(k-1)) = O(n*k) time
// O(1) space

// solution 2

// {1, 4, 2, -10, 0, 20}

// make a sum of size k
// sum
// i = 0
// j = k
// for
// sum = sum - arr[i] + arr[j]
// verify max
// i++, j++
// until j < size(arr)

// O(n*1) = O(n) time
// O(1) space

int maxSum(vector<int>& arr, int k) {
    int currentSum, maxSum = 0; 
    for (int i =  0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;
    for (int i = 0, j = k; j < size(arr); i++, j++) {
        currentSum += -arr[i] + arr[j];
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}


int main() {
    vector<vector<vector<int>>> testCases = {{{1, 4, 2, -10, 0, 20}, {3}}, {{1, 4, 2, -10, 0, 20}, {1}}};
    int expectedOutputs[] = {10, 20};
    for (int i = 0; i < size(testCases); i++) {
        cout << "result: " << maxSum(testCases[i][0], testCases[i][1][0]) << endl;
        cout << "expected: " << expectedOutputs[i] << endl;
        cout << endl;
    }
    return 0;
}