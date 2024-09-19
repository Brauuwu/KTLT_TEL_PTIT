#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check(string s){
	ll n=0;
	int l=s.length();
	for(int i=0;i<l;i++){
		n+=pow((s[i]-'0'),l);
	}
	if(s==to_string(n)) return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<check(s)<<endl;
	}
}
