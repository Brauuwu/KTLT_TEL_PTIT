#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		vector<ll> p;
		int x = 1;
		while(x <= n){
			p.push_back(x);
			x *= m;
		}
		vector<int> dp(n+1, 0);
		dp[0] = 1;
		for(int x:p){
			for(int i = x; i<=n; i++){
				dp[i] += dp[i-x];
			}
		}
		cout<<dp[n]<<endl;
	}
}
