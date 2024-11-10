#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int total_income = n*50;
	    int sugarcane = n*10;
	    int salt = n*10;
	    int mintleaves = n*15;
	    int profit = total_income-(sugarcane+salt+mintleaves);
	    cout<<profit<<endl;
	}

}
