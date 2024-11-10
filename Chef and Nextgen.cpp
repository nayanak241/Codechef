#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int p = a*b;
    int q = x*y;
    if(q>=p)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}
}
