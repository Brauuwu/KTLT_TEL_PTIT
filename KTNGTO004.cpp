#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n){
	ll res=-1;
	while(n%2==0){
		res=2;
		n/=2;
	}
	for(ll i=3;i*i<=n;i+=2){
		while(n%i==0){
			res=i;
			n/=i;
		}
	}
	if(n>2) res=n;
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solve(n)<<endl;
	}
}
