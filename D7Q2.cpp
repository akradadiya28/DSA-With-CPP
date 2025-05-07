#include <iostream>
#include <algorithm>
using namespace std;

// Function to rotate the array

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    k = k % n;

    for(int i = n - k; i < n; i++){
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - k; i++) {
        cout << arr[i];
        if (i < n - k - 1) {
            cout << " ";
        }
    }
    
    return 0;
}
