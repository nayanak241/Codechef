https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,x,k;
    cin>>n>>x>>k;
    int p = k/x;
    if(p<=n)cout<<p<<endl;
    else if(p>n)cout<<n<<endl;
}
}
