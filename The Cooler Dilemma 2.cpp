#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int c = (y - 1) / x;
        cout << c << endl;
    }
    return 0;
}
