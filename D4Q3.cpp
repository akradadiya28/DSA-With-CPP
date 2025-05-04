#include <bits/stdc++.h>
using namespace std;

// Function to convert a decimal number to binary

int main() {
    int n;
    cin >> n;

    if(n == 0){
        cout << "0";
        return 0;
    }

    string binary = "";
    while(n > 0){
        int bit = n % 2;
        binary = to_string(bit) + binary;
        n /= 2;
    }

    cout << binary;

    return 0;
}
