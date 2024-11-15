#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
        int p = k * m;
        if (n % p == 0) cout << n / p << endl;
        else {
            cout << (n / p) + 1 << endl;
        }
    }
    return 0;
}
