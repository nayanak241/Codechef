https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int p = y/x;
    if(p<=z)cout<<z-p<<endl;
    else if(p>z)cout<<0<<endl;
}
return 0;
}
