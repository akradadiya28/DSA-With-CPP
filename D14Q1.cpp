#include <bits/stdc++.h>
using namespace std;

// This function merges two sorted arrays into a single sorted array

vector<int> Solve(vector<int>& a, vector<int>& b) {
    vector<int> c;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        c.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        c.push_back(b[j]);
        j++;
    }

    return c;
}

int main() {
    
    int n, m;

    cin >> n;

    vector<int> a(n);

    for(auto& it : a) cin >> it;

    cin >> m;

    vector<int> b(m);

    for(auto& it : b) cin >> it;

    auto v = Solve(a, b);

    for(auto it : v){
        cout << it << " ";
    }
    
    return 0;
}
