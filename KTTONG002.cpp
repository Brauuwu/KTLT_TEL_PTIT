#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll l,r; cin>>l>>r;
		ll n=r-l+1;
		ll sum=n*(l+r)/2;
		cout<<sum<<endl;
	}
	return 0;
}
