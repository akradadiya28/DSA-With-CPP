#include <bits/stdc++.h>
using namespace std;

// This function finds the K-th largest element in an array

int Solve(vector<int> arr, int K) {
    sort(arr.begin(), arr.end(), greater<int>()); 
    return arr[K - 1]; 
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v(n);
    for(auto& it : v) cin >> it;

    cout << Solve(v, k);
}
 