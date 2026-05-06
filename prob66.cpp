//plus one

#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    vector<int> result = plusOne(digits);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}