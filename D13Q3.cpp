#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// This program reads a matrix of integers with n rows and m columns,

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        int maxVal = 0;
        for (int j = 0; j < m; ++j) {
            int val;
            cin >> val;
            if (j == 0 || val > maxVal) {
                maxVal = val;
            }
        }
        cout << maxVal;
        if (i < n - 1) cout << "\n";
    }

    return 0;
}
