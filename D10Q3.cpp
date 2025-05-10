#include <iostream>
#include <string>
using namespace std;

// This program extracts and prints specific key-value pairs from a URL query string


int main() {
    string url;
    getline(cin, url);

    size_t start = url.find('?') + 1;

    string keys[] = {"username", "pwd", "profile", "role", "key"};
    
    for(int i = 0; i < 5; ++i){
        size_t keyPos = url.find(keys[i] + "=", start);
        size_t valStart = keyPos + keys[i].length() + 1;
        size_t valEnd = url.find('&', valStart);
        if (valEnd == string::npos) valEnd = url.length();
        string value = url.substr(valStart, valEnd - valStart);
        cout << keys[i] << ": " << value;
        if (i != 4) cout << '\n';
    }
    
    return 0;
}
