#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	int a[n], sum=0;
    	for(int &x:a){
    		cin>>x;
    		sum+=x;
		}
		int half = sum/2;
		int dp[half+1] = {0};
		dp[0] = 1;
		for(int x:a){
			for(int i=half; i>=x; i--){
				if(dp[i-x]==1) dp[i]=1;
			}
		}
		int ans = 1e9;
		for(int i=0; i<=half; i++){
			if(dp[i]) ans = min(ans, abs(sum-2*i));
		}
		cout<<ans<<endl;
	}
    return 0;
}
