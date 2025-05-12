#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum of three numbers

int findMax(int a, int b, int c) {
    return max(a, max(b, c));
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << findMax(a, b, c);
    return 0;
}
