#include<bits/stdc++.h>
#define ll long long
using namespace std;

string Dec2Bin(ll n){
	string res;
	while(n>0){
		res+=(char)(n%2+'0');
		n/=2;
	}
	reverse(res.begin(),res.end());
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<Dec2Bin(n)<<endl;
	}
}
