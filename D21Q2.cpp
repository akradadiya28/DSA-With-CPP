#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// This program finds the maximum element in each contiguous subarray of size k

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    deque<int> dq;
    vector<int> result;

    for(int i = 0; i < n; ++i) {
        if(!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while(!dq.empty() && a[dq.back()] < a[i])
            dq.pop_back();

        dq.push_back(i);

        if(i >= k - 1)
            result.push_back(a[dq.front()]);
    }

    for(int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if(i != result.size() - 1) cout << " ";
    }

    return 0;
}
