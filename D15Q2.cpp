#include <bits/stdc++.h>
using namespace std;

// Function to compare two teams based on their total score

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> teams;

    for (int i = 0; i < n; ++i) {
        int id, s1, s2;
        cin >> id >> s1 >> s2;
        teams.push_back({id, s1 + s2});
    }

    sort(teams.begin(), teams.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });

    for (int i = 0; i < n; ++i) {
        cout << teams[i].first << ": " << teams[i].second;
        if (i != n - 1) cout << endl;
    }
    
    return 0;
}
