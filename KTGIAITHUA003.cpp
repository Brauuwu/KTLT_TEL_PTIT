#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll count(ll n){
	ll res=0;
	for(ll i=5;n/i>=1;i*=5){
		res+=n/i;
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<count(n)<<endl;
	}
}
