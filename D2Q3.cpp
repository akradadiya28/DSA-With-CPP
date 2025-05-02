#include <iostream>
using namespace std;

// This program checks if a number is divisible by 15

int main() {
    int n;
    cin >> n;

    if(n % 15 == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}
