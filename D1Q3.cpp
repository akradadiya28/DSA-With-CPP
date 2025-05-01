#include <iostream>
using namespace std;

// This program takes two integers as input and performs basic arithmetic operations

int main() {
    int a, b, sum, differnce, product, division;

    cin >> a >> b;

    sum = a + b;
    differnce = a - b;
    product = a * b;
    division = a / b;

    cout << sum << " " << differnce << " " << product << " " << division;

    return 0;
}
