#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll n,k,m; cin>>n>>k>>m;
		double x=k*log10(n);
		double mantissa=x-floor(x);
		double digits=pow(10,mantissa);
		ll res=(ll)(digits*pow(10,m-1));
		cout<<res<<endl;
	}
	return 0;
}
