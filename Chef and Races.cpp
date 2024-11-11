https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int count = 0;
    if(x!=a && x!=b)count++;
    if(y!=b && y!=a)count++;
    cout<<count<<endl;
}
return 0;
}
