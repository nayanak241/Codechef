#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int reverse = 0;
    while(n>0){
    int rem =n%10;
     reverse = reverse*10+rem;
    n = n/10;
    }
cout<<reverse<<endl;
}
return 0;
}
