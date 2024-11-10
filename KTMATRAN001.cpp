#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define NINF -1e9
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    	int n,m; cin>>n>>m;
    	int a[105][105];
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=m;j++) cin>>a[i][j];
		}
		for(int i=1;i<=n;i++){
			a[i][m+1]=NINF;
			a[i][m+1]=NINF;
		}
		int res=NINF;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=m;j++){
				a[i][j]+=max({a[i-1][j-1], a[i-1][j], a[i-1][j+1]});
			}
		}
		for(int j=1;j<=m;j++){
			res=max(res,a[n][j]);
		}
		cout<<res<<endl;
	}
    return 0;
}
