#include <bits/stdc++.h>
using namespace std;

// Function to compress a string

string Solve(string& s){
    string compressed = "";
    int n = s.length();

     for (int i = 0; i < n; ) {
        char currentChar = s[i];
        int count = 0;
        
        while (i < n && s[i] == currentChar) {
            count++;
            i++;
        }
        
        compressed += currentChar + to_string(count);
    }

    return compressed.length() < s.length() ? compressed : s;
}

int main() {
    string s;
    cin >> s;
    cout << Solve(s);
    return 0;
}
