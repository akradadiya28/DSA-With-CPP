#include <bits/stdc++.h>
using namespace std;

// Function to find the next greater element for each element in the array

vector<int> Solve(vector<int>& Arr) {
    int n = Arr.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= Arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = st.top();
        }
        st.push(Arr[i]);
    }

    return result;
}

int main() {
    int N;

    cin >> N;

    vector<int> Arr(N);

    for(auto& it : Arr) cin >> it;

    vector<int> ans = Solve(Arr);
    for(auto it : ans) cout << it << " ";
    return 0;
}
