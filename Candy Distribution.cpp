https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
   int p = round(n/m);
    if(p%2==0 && n%m==0)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}
}
