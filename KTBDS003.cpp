#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ull ans(ull n,ull k){
	if(n<k) return 0;
	if(k==1) return 1;
	ll cnt=n-1;
	for(int i=2;i<=k-1;i++){
		cnt*=n-i;
		cnt/=i;
	}
	return cnt;
}

int main(){
	int t; cin>>t;
	while(t--){
		ull n,k; cin>>n>>k;
		cout<<ans(n,k)<<endl;
	}
}
