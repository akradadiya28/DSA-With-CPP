#include <iostream>
using namespace std;

// This program checks if the user can access a system by entering the correct password.

int main() {
    int n;
    cin >> n;

    int i = 0, password;
    bool granted = false;

    do{
        cin >> password;
        if(password == 2025){
            cout << "Access Granted";
            granted = true;
            break;
        }
        i++;
    }while(i < n);
    
    if(!granted){
        cout << "Access Denied";
    }
    
    return 0;
}
