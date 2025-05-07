#include <iostream>
using namespace std;

// This program calculates the sum of all subarrays of a given array.

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int total_sum = 0;

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int sub_array_sum = 0;
            for(int i = start; i <= end; i++){
                sub_array_sum += arr[i];
            }
            total_sum += sub_array_sum;
        }
    }

    cout << total_sum;

    delete[] arr;
    
    return 0;
}
