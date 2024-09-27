#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
ll C[1000001];
int CombMod(int n, int k, int m){
	memset(C,0,sizeof(C));
	C[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,k);j>=0;j--){
			C[j]=(C[j]+C[j-1])%m;
		}
	}
	return C[k];
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k,m; cin>>n>>k>>m;
		cout<<CombMod(n,k,m)<<endl;
	}
}
