#include <bits/stdc++.h>
using namespace std;

// Function to interleave two halves of a queue

queue<int> Solve(queue<int>& q) {
    queue<int> firstHalf, secondHalf, ans;
    int n = q.size();
    
    for (int i = 0; i < n / 2; ++i) {
        firstHalf.push(q.front());
        q.pop();
    }
    
    while (!q.empty()) {
        secondHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty() && !secondHalf.empty()) {
        ans.push(firstHalf.front());
        firstHalf.pop();
        
        ans.push(secondHalf.front());
        secondHalf.pop();
    }

    return ans;
}

int main() {
    int N;
    cin >> N;

    queue<int> q;
    int t;
    while (N--) {
        cin >> t;
        q.push(t);
    }

    q = Solve(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
