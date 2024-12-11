#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n, m;
    cin >> n >> m;
    float p = float(n) / 2;
    if (m < p) cout << "PRO" << endl;
    else {
        cout << "NEWBIE" << endl;
    }
    return 0;
}
