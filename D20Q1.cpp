#include <bits/stdc++.h>
using namespace std;

// Function to find the frequency of each element in the array

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
