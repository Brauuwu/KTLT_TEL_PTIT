#include<bits/stdc++.h>
#define ll long long
using namespace std;

int cp(ll n){
	ll x=sqrt(n);
	if(x*x==n) return 1;
	return 0;
}
int check_digit(ll n){
	while(n>0){
		int x=n%10;
		if(x!=0&&x!=1&&x!=4&&x!=9) return 0;
		n/=10;
	}
	return 1;
}
ll solve(int k){
	if(k==0) return -1;
	ll a=pow(10,k-1), b=pow(10,k);
	for(ll i=a;i<b;i++){
		if(cp(i)&&check_digit(i)) return i;
	}
	return -1;
}

int main(){
	int t; cin>>t;
	while(t--){
		int k; cin>>k;
		cout<<solve(k)<<endl;
	}
}
