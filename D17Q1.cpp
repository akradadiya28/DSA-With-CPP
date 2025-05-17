#include <bits/stdc++.h>
using namespace std;

// Function to read an integer from input

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    unordered_map<string, int> mp;
    vector<int> result;

    while (Q--) {
        string cmd, name;
        cin >> cmd >> name;

        if (cmd == "add") {
            int x;
            cin >> x;
            mp[name] = x; 
        } else if (cmd == "erase") {
            mp.erase(name);
        } else if (cmd == "print") {
            auto it = mp.find(name);
            result.push_back(it == mp.end() ? 0 : it->second);
        }
    }

    for (size_t i = 0; i < result.size(); ++i) {
        if (i) cout << '\n';
        cout << result[i];
    }

    return 0;
}
