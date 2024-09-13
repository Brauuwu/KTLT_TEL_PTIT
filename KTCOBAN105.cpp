#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[2000001], MOD=1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		priority_queue<int,vector<int>,greater<int>> a;
		while(n--){
			int tmp; cin>>tmp;
			a.push(tmp);
		}
		ll res=0;
		while(a.size()>1){
			ll x=a.top(); a.pop();
			ll y=a.top(); a.pop();
			ll tmp=(x+y)%MOD;
			a.push(tmp);
			res+=tmp;
			res%=MOD;
		}
		cout<<res<<endl;
	}
}
