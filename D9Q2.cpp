#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// The problem is to calculate the absolute difference between the sums of the diagonals of a square matrix.

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        secondaryDiagonalSum += matrix[i][n-1-i];
    }
    
    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);
    cout << absoluteDifference;
    
    return 0;
}