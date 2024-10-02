#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll solve(ll n, ll p){
	ll sum=0;
	if(n==1) return 0;
	for(ll i=1;pow(p,i)<=n;i++){
		sum+=n/pow(p,i);
	}
	return sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n,p; cin>>n>>p;
		cout<<solve(n,p)<<endl;
	}
	return 0;
}
