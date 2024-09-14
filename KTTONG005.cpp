#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int k,int s){
	int res=0;
	if(s==3*k) return 1;
	for(int i=0;i<=k;i++){
		int m=min(k,s-i);
		for(int j=0;j<=m;j++){
			int n=s-i-j;
			if(n<=k) res++;
		}
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int k,s; cin>>k>>s;
		cout<<solve(k,s)<<endl;
	}
	return 0;
}
