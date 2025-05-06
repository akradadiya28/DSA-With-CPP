#include <bits/stdc++.h>
using namespace std;

// Function to find the second largest element in an array

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int first = INT_MIN, second = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    
    cout << second;
    
    delete[] arr;
    
    return 0;
}
