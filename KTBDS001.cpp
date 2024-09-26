#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int MOD=1e9+7;
ull a[1000005];
ull ans(ull n){
	memset(a,0,sizeof(a));
	a[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(j>i-1){
				a[j]=(a[j]+a[j-i])%MOD;
			}
		}
	}
	return (a[n]%MOD)-1;
}

int main(){
	int t; cin>>t;
	while(t--){
		ull n; cin>>n;
		cout<<ans(n)<<endl;
	}
}
