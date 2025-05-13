#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// This program implements a simple vector-like data structure that supports various operations

int main() {
    int n;
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int q;
    cin >> q;

    string query;
    bool firstOutput = true;

    while (q--) {
        cin >> query;

        if (query == "push_back") {
            int x;
            cin >> x;
            scores.push_back(x);
        } 
        else if (query == "pop_back") {
            if (!scores.empty()) {
                scores.pop_back();
            }
        } 
        else if (query == "front") {
            if (!scores.empty()) {
                if (!firstOutput) cout << '\n';
                cout << scores.front();
                firstOutput = false;
            }
        } 
        else if (query == "back") {
            if (!scores.empty()) {
                if (!firstOutput) cout << '\n';
                cout << scores.back();
                firstOutput = false;
            }
        } 
        else if (query == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= scores.size()) {
                if (!firstOutput) cout << '\n';
                cout << scores[pos - 1]; // convert 1-based to 0-based
                firstOutput = false;
            }
        } 
        else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l >= 1 && r <= scores.size() && l <= r) {
                reverse(scores.begin() + (l - 1), scores.begin() + r);
            }
        } 
        else if (query == "size") {
            if (!firstOutput) cout << '\n';
            cout << scores.size();
            firstOutput = false;
        } 
        else if (query == "capacity") {
            if (!firstOutput) cout << '\n';
            cout << scores.capacity();
            firstOutput = false;
        }
    }

    return 0;
}
