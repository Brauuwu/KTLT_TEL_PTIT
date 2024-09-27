#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll count0(ll n){
	ll cnt=0;
	while(n>0){
		cnt+=n/5;
		n/=5;
	}
	return cnt;
}
ll find(ll n){
	ll l=0,r=5*n;
	while(l<r){
		ll m=(l+r)/2;
		if(count0(m)<n) l=m+1;
		else r=m;
	}
	return l;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<find(n)<<endl;
	}
}
