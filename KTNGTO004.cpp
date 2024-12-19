#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

ll max_divisor(ll n){
	ll res = 2;
	while(n%2==0){
		n /= 2;
	}
	while(n%3==0){
		res = 3;
		n /= 3;
	}
	for(ll i=5; i*i<=n; i+=6){
		while(n%i==0){
			res = i;
			n /= i;
		}
		ll x = i+2;
		while(n%x==0){
			res = x;
			n /= x;
		}
	}
	if(n>1) res = n;
	return res;
}

int main(){
	int t; cin>>t;
    while(t--){
    	ll n; cin>>n;
    	cout<<max_divisor(n)<<endl;
	}
    return 0;
}
