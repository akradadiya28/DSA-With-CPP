#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum value in an array

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxVal = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }

    cout << maxVal;

    delete[] arr;
    
    return 0;
}