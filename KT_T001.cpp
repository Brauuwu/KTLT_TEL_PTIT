#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
ll a[100001];
string s[100001];

string MUL(string a, string b){
	if(a=="0"||b=="0") return "0";
	string res(a.size()+b.size(),'0');
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<b.size();i++){
		int carry=0;
		for(int j=0;j<a.size();j++){
			int x=(a[j]-'0')*(b[i]-'0')+carry+(res[i+j]-'0');
			res[i+j]=x%10+'0';
			carry=x/10;
		}
		if(carry) res[i+a.size()]+=carry;
	}
	reverse(res.begin(),res.end());
	while(res[0]=='0') res.erase(0,1);
	return res;
}

string power(string a, int n){
	if(n==0) return "1";
	if(n==1) return a;
	if(n%2) return MUL(a,power(a,n-1));
	string tmp=power(a,n/2);
	return MUL(tmp,tmp);
}

void Init(){
	ll m=1,carry=0,x;
	a[0]=1;
	for(int i=2;i<=1000;i++){
		for(int j=0;j<m;j++){
			x=a[j]*i+carry;
			a[j]=x%10;
			carry=x/10;
		}
		while(carry>0){
			a[m++]=carry%10;
			carry/=10;
		}
		for(int j=m-1;j>=0;j--){
			s[i]+=(char)(a[j]+'0');
		}
	}
}

string fact(int n){
	if(n==0||n==1) return "1";
	return s[n];
}

int main(){
	Init();
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<MUL(power("2",n),fact(n))<<endl;
	}
	return 0;
}
