#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll t,m,n,dp[500][500],a[500][500],x,y;

int main(){
	int t; cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		cin>>x>>y;
		for(int i=1;i<n;i++){
			dp[0][i]=INT_MAX;
			dp[m+1][i]=INT_MAX;
		}
		for(int i=1;i<=m;i++){
			if(i!=x) a[i][y]=INT_MAX;
			dp[i][y]=a[i][y];
		}
		for(int j=y+1;j<=n;j++){
			for(int i=1;i<=m;i++){
				dp[i][j]=min({dp[i-1][j-1],dp[i][j-1],dp[i+1][j-1]})+a[i][j];
			}
		}
		ll ans=INT_MAX;
		for(int i=1;i<=m;i++) ans=min(ans,dp[i][n]);
		cout<<ans<<endl;
	}
	return 0;
}
