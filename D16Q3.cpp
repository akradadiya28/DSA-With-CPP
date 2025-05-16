#include <bits/stdc++.h>
using namespace std;

// Function to check if there are two elements in the array such that their difference is K

bool Solve(vector<int>& Arr, int K){
    unordered_set<int> seen;

    for (int num : Arr) {
        if (seen.count(num - K) || seen.count(num + K)) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    
    int N, K;

    cin >> N;

    cin >> K;

    vector<int> v(N);

    for(auto& it : v) cin >> it;

    if(Solve(v, K)){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}
