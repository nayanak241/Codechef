#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,a,b;
    cin>>x>>a>>b;
    int q = a*1;
    int r  = b*2;
    int sum = q+r;
    if(sum>=x)cout<<"Qualify"<<endl;
    else{
        cout<<"NotQualify"<<endl;
    }
}
}
