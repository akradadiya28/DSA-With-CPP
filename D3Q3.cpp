#include <iostream>
using namespace std;

// This program counts the number of non-negative integer solutions (x, y, z) to the equation x + y + z = s

int main() {
    int k, s;
    cin >> k >> s;

    int count = 0;

    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s - x - y;
            if(z >= 0 && z <= k){
                count++;
            }
        }
    }
    
    cout << count;

    return 0;
}
