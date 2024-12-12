#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (b <= c && b <= a) cout << a + c << endl;
        else if (c <= b && c <= a) cout << a + b << endl;
        else if (a <= b && a <= c) cout << b + c << endl;
        else if (a == b && b == c) cout << a + b << endl;
    }
    return 0;
}
