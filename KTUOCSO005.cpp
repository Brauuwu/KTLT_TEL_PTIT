#include<bits/stdc++.h>
#define ll long long
using namespace std;

void analysis(ll n){
	map<ll,int> mp;
	ll value[1000];
	int cnt=0,l=0;
	if(n%2==0){
		cnt++;
		value[0]=2;
		l++;
		while(n%2==0){
			mp[value[0]]++;
			n/=2;
		}
	}
	for(ll i=3;i*i<=n;i+=2){
		if(n%i==0){
			cnt++;
			value[l]=i;
			while(n%i==0){
				mp[value[l]]++;
				n/=i;
			}
			l++;
		}
	}
	if(n>2){
		cnt++;
		value[l]=n;
		mp[value[l]]++;
		l++;
	}
	cout<<cnt<<endl;
	for(int i=0;i<l;i++){
		if(mp[value[i]]){
			cout<<value[i]<<" "<<mp[value[i]];
			cout<<endl;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		analysis(n);
	}
}
