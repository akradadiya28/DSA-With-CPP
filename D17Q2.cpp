#include <bits/stdc++.h>
using namespace std;

// Function to read an integer from input

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    multimap<string, int> mmap;
    vector<int> result;

    while (Q--) {
        string cmd, name;
        cin >> cmd >> name;

        if (cmd == "add") {
            int marks;
            cin >> marks;
            mmap.insert({name, marks});
        } else if (cmd == "erase") {
            auto it = mmap.find(name); 
            if (it != mmap.end()) {
                mmap.erase(it);
            }
        } else if (cmd == "eraseall") {
            mmap.erase(name); 
        } else if (cmd == "print") {
            auto it = mmap.find(name); 
            result.push_back(it != mmap.end() ? it->second : 0);
        }
    }

    for (size_t i = 0; i < result.size(); ++i) {
        if (i) cout << '\n';
        cout << result[i];
    }

    return 0;
}
