#include <iostream>
using namespace std;

// This program takes an integer input and prints a corresponding string based on the input value.

int main() {
    int num;
    cin >> num;

    switch(num){
        case 1:
            cout << "Samosa";
            break;
        case 2: 
            cout << "Kachori";
            break;
        case 3: 
            cout << "Jalebi";
            break;
        case 4:
            cout << "Chai";
            break;
        default:
            cout << "Invalid choice";
            break;
    }
    
    
    return 0;
}
