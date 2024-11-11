https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 int p =   max(a,b)+max(c,d);
 cout<<p<<endl;
}
return 0;
}
