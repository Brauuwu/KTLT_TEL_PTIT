#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Bin2Dec(string s){
	ll res=0,base=1;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='1') res+=(s[i]-'0')*base;
		base*=2;
	}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<Bin2Dec(s)<<endl;
	}
}
