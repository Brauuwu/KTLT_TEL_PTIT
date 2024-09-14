#include<bits/stdc++.h>
#define ll long long
using namespace std;

int checkfibo(ll n){
	if(n==0||n==1) return 1;
	ll a=0,b=1,c;
	while(1){
		c=a+b;
		a=b;
		b=c;
		if(c==n) return 1;
		else if(c>n) return 0;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int check=1;
		ll n; cin>>n;
		for(ll i=0;i<=n/2;i++){
			if(checkfibo(i)&&checkfibo(n-i)){
				check=0;
				cout<<i<<" "<<n-i;
				break;
			}
		}
		if(check) cout<<-1;
		cout<<endl;
	}
	return 0;
}
