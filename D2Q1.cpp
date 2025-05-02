#include <iostream>
using namespace std;

// This program checks if a number is even or odd

int main() {

    int i;
    cin >> i;

    if(i % 2 == 0) {
        cout << "Even number";
    }else if(i % 2 == 1) {
        cout << "Odd number";
    }

    return 0;
}
