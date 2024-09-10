#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sum_divisor(ll n){
	ll sum=1;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i) sum+=n/i;
		}
	}
	return sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<sum_divisor(n)<<endl;
	}
}
