#include <iostream>
using namespace std;

// This program checks the age group of a person based on their age

int main() {

    int age;
    cin >> age;

    if(age > 0 && age <= 12){
        cout << "Child";
    }else if(age >= 13 && age <= 19){
        cout << "Teenager";
    }else if(age >= 20 && age <= 59){
        cout << "Adult";
    }else if(age >= 60){
        cout << "Senior";
    }

    return 0;
}
