#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define NINF -1e9
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    	int m,n; cin>>m>>n;
    	int a[105][105];
    	for(int i=1;i<=m;i++){
    		for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		for(int j=1;j<=n;j++){
			a[0][j]=NINF;
			a[m+1][j]=NINF;
		}
		int res=NINF;
		for(int j=2;j<=n;j++){
			for(int i=1;i<=m;i++){
				a[i][j]+=max({a[i-1][j-1], a[i][j-1], a[i+1][j-1]});
			}
		}
		for(int i=1;i<=m;i++){
			res=max(res,a[i][n]);
		}
		cout<<res<<endl;
	}
    return 0;
}
