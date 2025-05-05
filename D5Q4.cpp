#include <iostream>
using namespace std;

// This program takes two integer inputs and prints a pattern of stars and dots based on the input values.

int main() {
    int N, M;
    cin >> N >> M;

    int rows = 3 * N + 1;
    int cols = 3 * M + 1;

    for(int i = 0; i < rows; i++){
        if(i % 3 == 0){
            for(int j = 0; j < cols; ++j) cout << "*";
        }else{
            for(int j = 0; j < cols; ++j){
                if (j % 3 == 0) cout << '*';
                else cout << '.';
            }
        }
        if (i != rows - 1) cout << '\n';
    }

    return 0;
}