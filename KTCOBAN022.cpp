#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll x,y,m; cin>>x>>y>>m;
		m/=x;
		if(m==0) cout<<m<<endl;
		else{
			x=m;
			while(x>=y){
				m+=x/y;
				x=x/y+x%y;
			}
			cout<<m<<endl;
		}
	}
	return 0;
}
