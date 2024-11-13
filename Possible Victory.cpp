#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int r, o, c;
    cin >> r >> o >> c;
    int p = 20 - o;
    int q = p * 6;
    int s = q * 6;
    int t = s + c;
    if (t > r) cout << "YES" << endl;
    else {
        cout << "NO" << endl;
    }
    return 0;
}
