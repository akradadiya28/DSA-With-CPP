#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// This program simulates a string manipulation system that supports various commands

int main() {
    int N, Q;
    cin >> N >> Q;
    string s;
    cin >> s;

    vector<string> outputs;

    while (Q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back") {
            if (!s.empty()) s.pop_back();
        } 
        else if (cmd == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        } 
        else if (cmd == "front") {
            if (!s.empty()) outputs.push_back(string(1, s.front()));
        } 
        else if (cmd == "back") {
            if (!s.empty()) outputs.push_back(string(1, s.back()));
        } 
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= s.size())
                outputs.push_back(string(1, s[pos - 1]));
        } 
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= s.size())
                reverse(s.begin() + l - 1, s.begin() + r);
        } 
        else if (cmd == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= s.size())
                outputs.push_back(s.substr(l - 1, r - l + 1));
        }
    }

    for (size_t i = 0; i < outputs.size(); ++i) {
        cout << outputs[i];
        if (i + 1 < outputs.size()) cout << '\n';
    }

    return 0;
}
