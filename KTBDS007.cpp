#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> p;
		int x = 1;
		while(x<=n){
			p.push_back(x);
			x *= 2;
		}
		vector<int> dp(n+1, 0);
		dp[0] = 1;
		for(int x:p){
			for(int i=x; i<=n; i++){
				dp[i] += dp[i-x];
			}
		}
		cout<<dp[n]<<endl;
	}
}
