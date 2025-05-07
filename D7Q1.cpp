#include <iostream>
using namespace std;

// The problem is to check if the second array is a subsequence of the first array.

int main() {
    int N, M;
    cin >> N >> M;

    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int B[M];
    for(int i = 0; i < M; i++){
        cin >> B[i];
    }

    int j = 0;
    for(int i = 0; i < N && j < M; i++){
        if(A[i] == B[j]){
            j++;
        }
    }

    if (j == M) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
