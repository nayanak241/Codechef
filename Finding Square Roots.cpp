https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FSQRT
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p = sqrt(n);
	    int q  = round(p);
	    cout<<q<<endl;
	}

}
