#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int p = y/x;
	    if(p*x == y)cout<<"YES"<<endl;
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
