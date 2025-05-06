#include <bits/stdc++.h>
using namespace std;

// Function to count even and odd numbers in an array

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int evenCount = 0;
    int oddCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    
    cout << evenCount << " " << oddCount;

    delete[] arr;

    return 0;
}