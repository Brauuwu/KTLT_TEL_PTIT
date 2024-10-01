#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll change(ll n){
	if(n<2) return n;
	int x=sqrt(n);
	ll a=n%2+change(n/2), b=n%3+change(n/3), c=n-x*x+change(x);
	return 1+min({a,b,c});
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<change(n)<<endl;
	}
	return 0;
}
