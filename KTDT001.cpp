#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans(ll n){
	ll cnt=0;
	for(ll i=1;i*(i+1)<2*n;i++){
		double a=(1.0*n-i*(i+1)/2)/(i+1);
		if(a-(ll)a==0.0) cnt++;
	}
	return cnt;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<ans(n)<<endl;
	}
}
