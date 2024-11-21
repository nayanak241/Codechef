#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int x, n;
        cin >> x >> n;
        int p = n / 100;

        if (n % 100 == 0) {
            
            cout << max(0, p - x) << endl;
        } else {
            int q = p + 1;
            cout << max(0, q - x) << endl;
        }
    }
    return 0;
}
