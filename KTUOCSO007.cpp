#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n, ll m){
	ll sum=0;
	if(n==1||m%n==0) return 0;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			if(m%i) sum+=i;
			if(i!=n/i){
				if(m%(n/i)) sum+=n/i;
			}
		}
	}
	return sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n,m; cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
	return 0;
}
