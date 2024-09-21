#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans(int n){
	ll sum=0,a[n+1];
	memset(a,0,sizeof(a));
	for(ll i=2;i<=n/2;i++){
		if(a[i]==0){
			for(int j=i*2;j<=n;j+=i) a[j]=i;
		}
	}
	for(ll i=2;i<=n;i++){
		if(a[i]) sum+=a[i];
		else sum+=i;
	}
	return sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<ans(n)<<endl;
    }
}
