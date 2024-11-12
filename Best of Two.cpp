https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2?tab=statement
#include <bits/stdc++.h>
using namespace std;
int highscore(int value1, int value2, int value3) {
    int score = value1 + value2 + value3;
    int minimum = min(min(value1, value2), value3);
    score = score - minimum;
    return score;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int score1 = highscore(a1, a2, a3);
        int score2 = highscore(b1, b2, b3);
        if (score1 > score2) {
            cout << "Alice" << endl;
        }
        else if (score2 > score1) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
