#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int check(ll n){
	if(n<2) return 0;
	if(n==2||n==3) return 1;
	if(n%2==0||n%3==0) return 0;
	for(ll i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0) return 0;
	}
	return 1;
}

ll solve(ll n){
	if(n<=1) return 5;
	ll prime=n-1;
	while(1){
		prime++;
		if(check(prime)&&check(prime-2)) break;
	}
	return prime;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}
