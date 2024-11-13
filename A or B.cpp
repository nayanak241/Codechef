#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        //for a to b calculate first 
        int p = 500 - (x * 2) + 1000 - ((x + y) * 4);
        //b to a calculate
        int q = 1000 - (y * 4) + 500 - ((x + y) * 2);
        if (p > q) cout << p << endl;
        else if (q == p) cout << q << endl;
        else if (q > p) cout << q << endl;
    }
    return 0;
}
