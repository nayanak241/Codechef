https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x<y)cout<<y-x<<endl;
    else if(x>y)cout<<x-y<<endl;
    else
    {
        cout<<0<<endl;
    }
}
}
