#include <bits/stdc++.h>
using namespace std;

// Function to compare two participants based on their total score

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> participants;

    for (int i = 0; i < n; ++i) {
        int id, performance, creativity;
        cin >> id >> performance >> creativity;
        int totalScore = performance + creativity;
        participants.push_back({id, totalScore});
    }

    sort(participants.begin(), participants.end());

    for (int i = 0; i < n; ++i) {
        cout << participants[i].first << ": " << participants[i].second;
        if (i != n - 1) cout << endl;
    }
    
    return 0;
}
