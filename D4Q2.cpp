#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a palindrome

int main() {
    int num, reversed = 0, remainder, original;
    cin >> num;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}
