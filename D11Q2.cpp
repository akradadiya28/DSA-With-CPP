#include <bits/stdc++.h>
using namespace std;

// Function to reverse the words in a string

string Solve(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) result += " ";
        result += words[i];
    }

    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << Solve(s);
    return 0;
}
