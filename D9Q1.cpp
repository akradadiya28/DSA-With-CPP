#include <iostream>
#include <vector>
using namespace std;

// The problem is to check if all adjacent cells of a given cell in a grid are 'A'.

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    
    int x, y;
    cin >> x >> y;
    x--; y--; 
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    bool allA = true;
    int validNeighbors = 0;
    
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
            validNeighbors++;
            if (grid[nx][ny] != 'A') {
                allA = false;
                break;
            }
        }
    }
    
    if (allA && validNeighbors > 0) {
        cout << "yes";
    } else {
        cout << "no";
    }
    
    return 0;
}