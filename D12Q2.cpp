#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate factorial of a number

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);  
}

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << factorial(n);
    }

    return 0;
}
