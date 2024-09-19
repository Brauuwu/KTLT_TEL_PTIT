#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000001];
int check(ll *b,int n){
	ll d=b[1]-b[0];
	for(int i=2;i<n;i++){
		if(b[i+1]-b[i]!=d) return 0; 
	}
	return 1;
}
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		if(check(a,n)) cout<<"YES\n";
		else cout<<"NO\n";
    }
}
