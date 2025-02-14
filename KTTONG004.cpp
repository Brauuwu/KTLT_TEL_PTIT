#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, n; cin >> m >> n;
        vector<int> p;
        for(int i=1; pow(i, n)<=m; i++){
            p.push_back(pow(i, n));
        }
        int dp[m+1] = {0};
        dp[0] = 1;
        for(int x: p){
            for(int i=m; i>=x; i--){
                dp[i] += dp[i-x];
            }
        }
        cout << dp[m] << endl;
    }
}
