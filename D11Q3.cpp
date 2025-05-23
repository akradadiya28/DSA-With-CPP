#include <bits/stdc++.h>
using namespace std;

// Function to multiply two numbers represented as strings

string Solve(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    int n = num1.size(), m = num2.size();
    vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string product;
    for (int num : result) {
        if (!(product.empty() && num == 0)) {
            product.push_back(num + '0');
        }
    }

    return product.empty() ? "0" : product;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << Solve(s1, s2);
    return 0;
}
