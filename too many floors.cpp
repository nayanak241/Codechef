#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,r;
    cin>>x>>y;
    int p = ceil((float)x/10);
    int q = ceil((float)y/10);
    if(q>=p){
        cout<<q-p<<endl;
    }
    else{
        cout<<p-q<<endl;
    }
}
return 0;
}
