#include <iostream>
using namespace std;

// This program checks if a year is a leap year or not

int main() {
    int year;
    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Leap Year";
    }else{
        cout << "Not a Leap Year";
    }

    return 0;
}
