#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int MOD=1e9+7;

ll Mod(string a, int m){
	ll r=0;
	for(int i=0;i<a.size();i++){
		r=r*10+a[i]-'0';
		r%=m;
	}
	return r;
}

ll Power(ll a, ll b){
	ll res=1;
	while(b>0){
		if(b%2){
			res*=a;
			res%=MOD;
		}
		a*=a;
		a%=MOD;
		b/=2;
	}
	return res;
}


int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		ll A=Mod(a,MOD);
		ll B=Mod(b,MOD-1);
		ll ans=Power(A,B);
		cout<<ans<<endl;
	}
	return 0;
}
