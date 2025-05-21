#include <iostream>
#include <vector>
using namespace std;

// This program calculates the sum of the maximum elements of all contiguous subarrays

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for(int i = 0; i < n; ++i)
        cin >> A[i];

    long long totalSum = 0;
    
    for(int i = 0; i < n; ++i) {
        int maxVal = A[i];
        for(int j = i; j < n; ++j) {
            maxVal = max(maxVal, A[j]);
            totalSum += maxVal;
        }
    }

    cout << totalSum;
    return 0;
}
