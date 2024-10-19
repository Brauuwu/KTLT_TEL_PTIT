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

string complement9(string s){
	string res;
	for(int i=0;i<s.size();i++){
		res+='9'-s[i]+'0';
	}
	return res;
}

string SUB(string a, string b){
	string res;
	int l=max(a.size(), b.size());
	while(a.size()<l) a="0"+a;
	while(b.size()<l) b="0"+b;
	if(a<b) a.swap(b);
	res=ADD(a,complement9(b));
	if(res.size()>a.size()){
		char MSD=res[0];
		string carry={MSD};
		res.erase(0,1);
		res=ADD(res,carry);
		return res;
	}
	else return complement9(res);
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		cout<<SUB(a,b)<<endl;
	}
	return 0;
}
