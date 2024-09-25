#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

void solve(ll n){
	ll a[100001],maxi=-1e9;
	map<ll,int> mp;
	int h=0;
	if(n%2==0){
		a[h]=2;
		while(n%2==0){
			mp[a[h]]++;
			n/=2;
		}
		if(mp[a[h]]>maxi) maxi=mp[a[h]];
		h++;
	}
	for(ll i=3;i*i<=n;i+=2){
		if(n%i==0){
			a[h]=i;
			while(n%i==0){
				mp[a[h]]++;
				n/=i;
			}
			if(mp[a[h]]>maxi) maxi=mp[a[h]];
			h++;
		}
	}
	if(n>1){
		a[h]=n;
		mp[a[h]]++;
		if(mp[a[h]]>maxi) maxi=mp[a[h]];
		h++;
	}
	for(int i=0;i<h;i++){
		if(mp[a[i]]==maxi){
			cout<<a[i]<<" "<<mp[a[i]];
			break;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		solve(n);
		cout<<endl;
	}
	return 0;
}
