https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n,x,p;
    cin>>n>>x>>p;
    int correct  = x*3;
    int incorrect = (n-x);
    int pass = correct-incorrect;
    if(pass>=p)cout<<"PASS"<<endl;
    else{
        cout<<"FAIL"<<endl;
    }
}
}
