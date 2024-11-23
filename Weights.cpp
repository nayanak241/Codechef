#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w == (x + y) || w == (y + z) || w == (z + x) || w == (x + y + z) || w == x || w == y || w == z) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
