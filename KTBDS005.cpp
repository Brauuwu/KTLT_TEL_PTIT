#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	vector<int> p;
    	for(int i=1; i*i<=n; i++){
    		p.push_back(i*i);
		}
		int dp[n+1] = {0};
		dp[0] = 1;
		for(int x:p){
			for(int i=x; i<=n; i++){
				dp[i] += dp[i-x];
			}
		}
		cout<< dp[n] <<endl;
	}
    return 0;
}
