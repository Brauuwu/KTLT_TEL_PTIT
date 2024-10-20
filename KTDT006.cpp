#include<bits/stdc++.h>
using namespace std;

string ADD(string a, string b){
	string res;
	int l=max(a.size(), b.size());
	while(a.size()<l) a="0"+a;
	while(b.size()<l) b="0"+b;
	int carry=0;
	for(int i=l-1;i>=0;i--){
		int x=(a[i]-'0')+(b[i]-'0')+carry;
		res=char(x%10+'0')+res;
		carry=x/10;
	}
	if(carry) res="1"+res;
	return res;
}

string complement10(string s){
	string res;
	for(int i=0;i<s.size();i++){
		res+='9'-s[i]+'0';
	}
	res=ADD(res,"1");
	return res;
}

string SUB(string a, string b){
	string res;
	if(a.size()<b.size()) a.swap(b);
	int l=max(a.size(), b.size());
	while(a.size()<l) a="0"+a;
	while(b.size()<l) b="0"+b;
	res=ADD(a,complement10(b));
	if(res.size()>l){
		res.erase(0,1);
		while(res[0]=='0') res.erase(0,1);
		return res;
	}
	else return complement10(res);
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		cout<<SUB(a,b)<<endl;
	}
	return 0;
}
