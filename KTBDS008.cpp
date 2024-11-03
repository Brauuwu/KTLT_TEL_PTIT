#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD=1e9+7;

ll powMod(ll n, ll k){
	ll res = 1;
	while(k>0){
		if(k%2==1){
			res*=n;
			res%=MOD;
		}
		n*=n;
		n%=MOD;
		k/=2;
	}
	return res%MOD;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n;cin>>n;
		if(n%2==1) cout<<"-1"<<endl;
		else cout<<powMod(2,n/2-1)<<endl;
	}
	return 0;
}
