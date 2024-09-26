#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,l; cin>>n>>l;
		ull sum=0;
		for(int i=1;i<n;i++){
			ll x; cin>>x;
			sum+=x;
		}
		ull ans=l*n+n*n/2-n/2;
		ans-=sum;
		cout<<ans<<endl;
	}
}
