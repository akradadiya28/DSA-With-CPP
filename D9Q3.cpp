#include <iostream>
using namespace std;

// The problem is to find the substring before the first backslash in a given string.

int main() {
    string s;
    getline(cin, s);

    size_t backslashPos = s.find('\\');
    
    cout << s.substr(0, backslashPos);
    
    return 0;
}
