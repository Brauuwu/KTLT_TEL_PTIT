#include<bits/stdc++.h>
using namespace std;

string ADD(string a, string b){
	if(a.size()>b.size()) a.swap(b);
	string res;
	int n1=a.size(), n2=b.size();
	int diff=n2-n1, carry=0;
	for(int i=n1-1; i>=0; i--){
		int x=(a[i]-'0')+(b[i+diff]-'0')+carry;
		res+=char(x%10+'0');
		carry=x/10;
	}
	for(int i=n2-n1-1; i>=0; i--){
		int x=(b[i]-'0')+carry;
		res+=char(x%10+'0');
		carry=x/10;
	}
	if(carry) res+=char(carry+'0');
	reverse(res.begin(), res.end());
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
	if(a.size()<b.size()) a.swap(b);
	string res;
	int n1=a.size(), n2=b.size();
	int diff=n1-n2;
	for(int i=0; i<diff; i++) b="0"+b;
	res=ADD(a,complement10(b));
	if(res.size()>a.size()){
		res.erase(0,1);
		while(res[0]=='0') res.erase(0,1);
		return res;
	}
	return complement10(res);
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		cout<<SUB(a,b)<<endl;
	}
	return 0;
}
