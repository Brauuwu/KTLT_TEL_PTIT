#include<bits/stdc++.h>
#define ll long long
using namespace std;

string MUL(string a, string b){
	if(a=="0"||b=="0") return "0";
	string res;
	int La=a.size(), Lb=b.size();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<La+Lb;i++) res.append("0");
	for(int i=0;i<Lb;i++){
		int carry=0,j;
		for(j=0;j<La;j++){
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

string power(int n, int m){
	if(n==0) return "0";
	if(n==1) return "1";
	string s=to_string(n);
	if(m==1) return s;
	if(m%2) return MUL(s,power(n,m-1));
	string tmp=power(n,m/2);
	return MUL(tmp,tmp);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k; cin>>n>>m>>k;
		string s=power(n,m);
		string res=s.substr(0,k);
		cout<<res<<endl;
	}
	return 0;
}
