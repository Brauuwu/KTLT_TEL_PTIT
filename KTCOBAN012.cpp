#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check(string s){
	int l=s.length();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		string s=to_string(n);
		if(check(s)) cout<<n;
		else{
			ll n1=n, n2=n;
			while(1){
				n1--;
				n2++;
				string s1=to_string(n1), s2=to_string(n2);
				if(check(s1)&&check(s2)){
					cout<<n1<<" "<<n2;
					break;
				}
				else if(check(s1)&&!check(s2)){
					cout<<n1;
					break;
				}
				else if(check(s2)&&!check(s1)){
					cout<<n2;
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
