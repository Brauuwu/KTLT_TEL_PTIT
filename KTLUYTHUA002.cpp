#include<bits/stdc++.h>
#define ll long long
using namespace std;
int MOD=1e9+7;

ll powMOD(ll a, ll n){
	ll res=1;
	a%=MOD;
	while(n>0){
		if(n%2) res=(res*a)%MOD;
		a=(a*a)%MOD;
		n/=2;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll a,n; cin>>a>>n;
		cout<<powMOD(a,n)<<endl;
	}
}
