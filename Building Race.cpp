#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        float p = float(a) / x;
        float q = float(b) / y;
        if (p < q) cout << "Chef" << endl;
        else if (p > q) cout << "Chefina" << endl;
        else {
            cout << "Both" << endl;
        }
    }
    return 0;
}
