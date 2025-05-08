#include <bits/stdc++.h>
using namespace std;

// Function to sort the array

int Solve(vector<int>& arr, int X){
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == X){
            result = mid;
            high = mid - 1;
        }else if(arr[mid] < X){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int N, X;

    cin >> N >> X;
    vector<int> arr(N);
    for(auto& it : arr) cin >> it;
    
    cout << Solve(arr, X);
    return 0;
}