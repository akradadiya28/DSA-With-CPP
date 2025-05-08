#include <bits/stdc++.h>
using namespace std;

// Function to sort the array

vector<int> Solve(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; ++i){
        for(int j = 0; j < n - 1; ++j){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

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