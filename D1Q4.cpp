#include <iostream>
using namespace std;

// This program calculates the area and perimeter of a rectangle given its length and breadth

int main() {
    int length, breadth, areaOfGarden, perimeter;

    cin >> length >> breadth;

    areaOfGarden = length * breadth;
    perimeter = (length + breadth) * 2;

    cout << areaOfGarden << endl;
    cout << perimeter;
    
    return 0;
}
