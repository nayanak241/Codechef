#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> s;
            if (s[0] == 'S') count++;
            else {
                count1++;
            }
        }
        cout << count << " " <<count1 << endl;
    }
    return 0;
}
