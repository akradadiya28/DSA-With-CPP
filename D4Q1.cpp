#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits of a number

int main() {
    int n;
    cin >> n;

    int sum = 0;

    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    cout << sum;

    return 0;
}

