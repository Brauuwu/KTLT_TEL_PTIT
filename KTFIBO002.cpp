#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll evenFibo(ll n){
	if(n<1) return n;
	if(n==1) return 2;
	return 4*evenFibo(n-1)+evenFibo(n-2);
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll sum=0;
		for(int i=1;evenFibo(i)<=n;i++) sum+=evenFibo(i);
		cout<<sum<<endl;
	}
}
