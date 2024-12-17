#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int MOD = 29;

ll powerMOD(ll a, ll b){
	ll res = 1;
	while(b){
		if(b&1){
			res *= a;
			res %= MOD;
		}
		a *= a;
		a %= MOD;
		b /= 2;
	}
	return res;
}

ll sum_divisors(ll x){
	ll a = (powerMOD(2, 2*x+1)-1+MOD) % MOD;
	a = (a * powerMOD(2-1, MOD-2)) % MOD;
	ll b = (powerMOD(3, x+1)-1+MOD) % MOD;
	b = (b * powerMOD(3-1, MOD-2)) % MOD;
	ll c = (powerMOD(167, x+1)-1+MOD) % MOD;
	b = (b * powerMOD(167-1, MOD-2)) % MOD;
	
	ll res = (a*b)%MOD;
	res = (res*c)%MOD;
	
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		cout<<sum_divisors(x)<<endl;
	}
}
