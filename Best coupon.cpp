#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x * 0.10 > 100) {
            cout << x * 0.10 << endl;
        }
        else {
            cout << "100" << endl;
        }
    }
    return 0;
}
