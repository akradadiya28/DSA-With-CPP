#include <iostream>
using namespace std;

int main() {
    // Your code starts here
    int n;
    cin >> n;

    int number[n];

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << "Even: " << i << endl;
        }else if(i % 2 == 1){
            cout << "Odd: " << i << endl;
        }else if(i > 0){
            cout << "Positive: " << i << endl;
        }else if(i < 0){
            cout << "Negative: " << i;
        }
    }
    
    
    return 0;
}
