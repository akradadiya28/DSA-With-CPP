#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum element in an array

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
