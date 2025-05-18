#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string using stack

string Solve(string s) {
    stack<char> st;
    
    for (char ch : s) {
        st.push(ch);
    }

    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    return reversed;
}
int main() {
    string S;
    cin >> S;
    cout << Solve(S);
    return 0;
}
