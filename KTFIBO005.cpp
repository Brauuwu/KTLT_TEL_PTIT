#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll f[100];
void Init(){
	f[1] = f[2] = 1;
	for(int i=3; i<=92; i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int main(){
	Init();
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> p;
		for(int i=2; f[i]<=n; i++){
			p.push_back(f[i]);
		}
		ll dp[n+1] = {0};
		dp[0] = 1;
		for(int x:p){
			for(int i=n; i>=x; i--){
				dp[i] += dp[i-x];
			}
		}
		cout << dp[n] << endl;
	}
}
