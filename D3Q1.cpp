#include <iostream>
#include <vector>
using namespace std;

// This program reads a list of integers and counts how many are even, odd, positive, and negative.

int main() {
    int n;
    cin >> n;

    vector<int> number(n);
    for(int i = 0; i < n; i++){
        cin >> number[i];
    }

    int even = 0, odd = 0, positive = 0, negative = 0;

    for(int i = 0; i < n; i++){
        if(number[i] % 2 == 0) even++;
        else odd++;
        if(number[i] > 0) positive++;
        else if(number[i] < 0) negative++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative; 

    return 0;
}
