#include <bits/stdc++.h>
using namespace std;

// Remove duplicates from an array

vector<int> removeDuplicates(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    return result;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& it : arr) cin >> it;

    vector<int> result = removeDuplicates(arr);

    for (auto num : result) {
        cout << num << " ";
    }

    return 0;
}
