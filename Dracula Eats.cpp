#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << ceil(float(n - 1) / float(7))<<endl;
    }
    return 0;
}
