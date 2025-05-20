#include <bits/stdc++.h>
using namespace std;

// Function to check if two strings are anagrams

bool Solve(string A, string B){
    if (A.length() != B.length()) return false;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    return A == B;
}

int main() {
    string a, b;
    cin >> a >> b;

    if(Solve(a, b)){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
