#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long

using namespace std;

int MOD=123456789;
ll power(ll a, ll n){
	if(n==0) return 1;
	if(n==1) return a;
	ll tmp=power(a,n/2);
	if(n%2) return (((tmp*tmp)%MOD)*a)%MOD;
	else return (tmp*tmp)%MOD;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<power(2,n-1)<<endl;
	}
	return 0;
}
