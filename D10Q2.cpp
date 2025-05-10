#include <iostream>
using namespace std;

// This program checks if a given number is present in a 2D array

int main() {
    int N, M;
    cin >> N >> M;

    int grid[N][M];
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> grid[i][j];
        }
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0; i < N && !found; ++i){
        for(int j = 0; j < M; ++j){
            if(grid[i][j] == x){
                found = true;
                break;
            }
        }
    }

    cout << (found ? "present" : "not present");
    
    
    return 0;
}
