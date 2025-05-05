#include <iostream>
using namespace std;

// This program takes an integer input and prints a pattern of letters based on the input value.

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            cout << ch;
            ch++;
        }
        if(i != n) cout << endl;    
    }
    
    
    return 0;
}
