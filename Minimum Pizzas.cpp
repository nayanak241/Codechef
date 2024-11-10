#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int p = n*x;
	    int q= p/4;
	    if(p%4==0){
	        cout<<q<<endl;
	    }
	    else{
	        cout<<q+1<<endl;
	    }
	}

}
