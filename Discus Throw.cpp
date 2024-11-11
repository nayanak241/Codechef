https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)cout<<a<<endl;
    else if(b>=a && b>=c)cout<<b<<endl;
    else if(c>=a && c>=b)cout<<c<<endl;
    else if(a==b && b==c && c==a)cout<<a<<endl;
}
}
