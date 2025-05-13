#include <iostream>
#include <vector>
using namespace std;

// This program calculates the sum of each column in a 2D grid

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    vector<int> colSum(m, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            colSum[j] += grid[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        cout << colSum[j];
        if (j < m - 1) cout << " ";
    }

    return 0;
}
