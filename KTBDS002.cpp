#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ull ans(ull n,ull k){
	ull res=1, j=1;
	for(ull i=n+1;i<n+k;i++){
		res*=i;
		if(j<k) res/=j++;
	}
	return res; 
}

int main(){
	int t; cin>>t;
	while(t--){
		ull n,k; cin>>n>>k;
		cout<<ans(n,k)<<endl;
	}
}
