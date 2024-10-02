#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll catalan[40];
void solve(){
	memset(catalan,0,sizeof(catalan));
	catalan[0]=catalan[1]=1;
	for(int i=1;i<32;i++){
		for(int j=0;j<=i;j++){
			catalan[i+1]+=catalan[j]*catalan[i-j];
		}
	}
}

int main(){
	solve();
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<catalan[n]<<endl;
	}
}
