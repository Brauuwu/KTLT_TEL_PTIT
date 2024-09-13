#include<bits/stdc++.h>
#define ll long long
using namespace std;

int checkfibo(ll n){
	if(n==0||n==1) return 1;
	int a=0,b=1,c;
	while(1){
		c=a+b;
		a=b;
		b=c;
		if(c==n) return 1;
		else if(c>=n) return 0;
	}
}
ll find(ll n){
	if(n<4) return 4;
	if(checkfibo(n+1)) return n+2;
	else return n+1;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<find(n)<<endl;
	}
}
