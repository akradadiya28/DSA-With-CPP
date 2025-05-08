#include <bits/stdc++.h>
using namespace std;

// Function to sort the array

vector<int> Solve(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(auto& it : arr) cin >> it;
    arr = Solve(arr);
    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}