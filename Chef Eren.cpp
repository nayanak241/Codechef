https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int p = n/2;
    if(n==1)cout<<b<<endl;
    else if(n%2==0){
        cout<<(p*a+p*b)<<endl;
    }
    else{
        cout<<(p*a+(p+1)*b)<<endl;
    }
}
return 0;
}
