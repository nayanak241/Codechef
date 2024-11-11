https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    float a,x,b,y;
    cin>>a>>x>>b>>y;
    float p = a/x;
    float q = b/y;
    if(p>q)cout<<"Alice"<<endl;
    else if(q>p)cout<<"Bob"<<endl;
    else{
        cout<<"Equal"<<endl;
    }
}
}
