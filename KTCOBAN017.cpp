#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll sum_max_array(ll *a, ll n){	//Kadane Algorithm
	ll res=a[0];
	ll sum_current=a[0];
	for(int i=1;i<n;i++){
		sum_current=max(sum_current+a[i],a[i]);
		res=max(res,sum_current);
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<sum_max_array(a,n)<<endl;
	}
	return 0;
}
