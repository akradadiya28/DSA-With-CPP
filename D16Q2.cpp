#include <bits/stdc++.h>
using namespace std;


// Function to count elements in a range [Low, High]

int Solve(vector<int>& Arr, int Low, int High){
    int count = 0;
    for (int num : Arr) {
        if (num >= Low && num <= High) {
            count++;
        }
    }
    return count;
}

int main() {
    
    int N, Low, High;

    cin >> N;

    vector<int> v(N);

    for(auto& it : v) cin >> it;

    cin >> Low >> High;

    cout << Solve(v, Low, High);
    return 0;
}
