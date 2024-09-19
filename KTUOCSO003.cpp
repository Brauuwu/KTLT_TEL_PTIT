#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check(ll n){
	if(n==1) return 0;
	ll s=1;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			s+=i;
			if(i!=n/i) s+=n/i;
		}
	}
	if(s==n) return 1;
	return 0;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<check(n)<<endl;
	}
}
