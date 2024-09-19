#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		if(s[8]=='?'){
			if(s[9]=='?'||s[9]<='3'&&s[9]) s[8]='2';
			else s[8]='1';
		}
		if(s[9]=='?'){
			if(s[8]=='2') s[9]='3';
			else s[9]='9';
		}
		if(s[11]=='?') s[11]='5';
		if(s[12]=='?') s[12]='9';
		for(int i=7;i<14;i++) cout<<s[i];
		cout<<endl;
	}
}
