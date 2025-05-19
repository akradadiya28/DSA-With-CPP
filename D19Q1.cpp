#include <bits/stdc++.h>
using namespace std;

// Function to read an integer from input

int main() {
    int Q;
    cin >> Q;
    priority_queue<int> pq;
    vector<int> output;

    while (Q--) {
        string command;
        cin >> command;

        if (command == "add") {
            int x;
            cin >> x;
            pq.push(x);
        } else if (command == "remove") {
            if (!pq.empty()) {
                pq.pop();
            }
        } else if (command == "print") {
            if (!pq.empty()) {
                output.push_back(pq.top());
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
