#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll n,ans=0; cin>>n;
		for(ll i=2;n/i>=1;i*=2) ans+=n/i;
		cout<<ans<<endl;
	}
}
