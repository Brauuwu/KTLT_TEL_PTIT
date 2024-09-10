#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solve(int n){
	string res="";
	int carry=0;
	for(int i=1;i<=n;i++){
		int x=i+carry;
		res+=(char)(x%10+'0');
		carry=x/10;
	}
	for(int i=n-1;i>0;i--){
		int x=i+carry;
		res+=(char)(x%10+'0');
		carry=x/10;
	}
	reverse(res.begin(),res.end());
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<solve(n)<<endl;
	}
}
