#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int p, q, r, s;
        cin >> p >> q >> r >> s;
        int a = q + r + s;
        int b = p + r + s;
        int c = p + q + s;
        int d = p + q + r;
        if (p > a || q > b || r > c || s > d) cout << "yes" << endl;
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
