#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
  int   count  = 0;
    if(x==y)cout<<0<<endl;
    else{
        while(x<y){
            count++;
            x = x+8;
            
        }
        cout<<count<<endl;
    }
}
return 0;
}
