#include <bits/stdc++.h>
using namespace std;

// Function to count distinct elements in an array

int Solve(vector<int>& Arr){
    unordered_set<int> s(Arr.begin(), Arr.end());
    return s.size();
}

int main() {
    
    int N;

    cin >> N;

    vector<int> v(N);

    for(auto& it : v) cin >> it;

    cout << Solve(v);
    return 0;
}
