#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int count = 0;
	int count1 = 0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]%2==0)count++;
	    else
	    {
	        count1++;
	    }
	}
	if(count>count1)cout<<"READY FOR BATTLE"<<endl;
	else
	{
	    cout<<"NOT READY"<<endl;
	}
	

}
