#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;
    int p = x - (y * z);
    if ((y * z) > x) cout << -1 << endl;
    else {
        cout << p << endl;
    }
    return 0;
}
