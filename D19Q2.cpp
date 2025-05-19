#include <bits/stdc++.h>
using namespace std;

// Function to read a string from input

int main() {
    int Q;
    cin >> Q;
    deque<int> dq;
    vector<int> output;

    while (Q--) {
        string command;
        cin >> command;

        if (command == "insertback") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (command == "insertfront") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (command == "eraseback") {
            if (!dq.empty()) dq.pop_back();
        } else if (command == "erasefront") {
            if (!dq.empty()) dq.pop_front();
        } else if (command == "printfront") {
            output.push_back(dq.empty() ? 0 : dq.front());
        } else if (command == "printback") {
            output.push_back(dq.empty() ? 0 : dq.back());
        } else if (command == "print") {
            int i;
            cin >> i;
            if (i >= 0 && i < dq.size()) {
                output.push_back(dq[i]);
            } else {
                output.push_back(0);
            }
        }
    }

    for (size_t i = 0; i < output.size(); ++i) {
        cout << output[i];
        if (i != output.size() - 1) cout << '\n';
    }

    return 0;
}
