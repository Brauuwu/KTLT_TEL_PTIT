#include<bits/stdc++.h>
#define ll long long
using namespace std;

string ADD(string a, string b){
	string res="";
	int l=max(a.size(),b.size());
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	while(a.size()<l) a+="0";
	while(b.size()<l) b+="0";
	int carry=0;
	for(int i=0;i<l;i++){
		int x=(a[i]-'0')+(b[i]-'0')+carry;
		res+=(char)(x%10+'0');
		carry=x/10;
	}
	if(carry) res.append("1");
	reverse(res.begin(),res.end());
	return res;
}
string MUL(string a, string b){
	if(a=="0"||b=="0") return "0";
	string res="";
	for(int i=0;i<a.size()+b.size();i++) res.append("0");
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<b.size();i++){
		int carry=0;
		int j;
		for(j=0;j<a.size();j++){
			int x=(a[j]-'0')*(b[i]-'0')+carry+(res[i+j]-'0');
			res[i+j]=x%10+'0';
			carry=x/10;
		}
		if(carry) res[i+j]=carry+'0';
	}
	reverse(res.begin(),res.end());
	while(res[0]=='0') res.erase(0,1);
	return res;
}
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string a,b; char sgn;
		cin>>a>>sgn>>b;
		if(sgn=='+') cout<<ADD(a,b)<<endl;
		else cout<<MUL(a,b)<<endl;
	}
	return 0;
}
