#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x>y)cout<<"loss"<<endl;
    else if(x<y)cout<<"profit"<<endl;
    else{
        cout<<"neutral"<<endl;
    }
}
return 0;
}
