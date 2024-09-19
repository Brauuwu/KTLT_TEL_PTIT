#include<bits/stdc++.h>
#define ll long long
using namespace std;
string DecToHex(ll n){
	string binary,hex;
	if(n==0) return "0";
	while(n>0){
		binary.append(to_string(n%2));
		n/=2;
	}
	reverse(binary.begin(),binary.end());
	while(binary[0]=='0') binary.erase(0,1);
	int mod=binary.size()%4;
	if(mod){
		reverse(binary.begin(),binary.end());
		for(int i=1;i<=4-mod;i++) binary.append("0");
		reverse(binary.begin(),binary.end());
	}
	for(int i=0;i<binary.size();i+=4){
		string check="";
		for(int j=i;j<i+4;j++) check+=binary[j];
		if(check=="0000") hex.append("0");
		if(check=="0001") hex.append("1");
		if(check=="0010") hex.append("2");
		if(check=="0011") hex.append("3");
		if(check=="0100") hex.append("4");
		if(check=="0101") hex.append("5");
		if(check=="0110") hex.append("6");
		if(check=="0111") hex.append("7");
		if(check=="1000") hex.append("8");
		if(check=="1001") hex.append("9");
		if(check=="1010") hex.append("A");
		if(check=="1011") hex.append("B");
		if(check=="1100") hex.append("C");
		if(check=="1101") hex.append("D");
		if(check=="1110") hex.append("E");
		if(check=="1111") hex.append("F");
	}
	return hex;
}
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<DecToHex(n)<<endl;
	}
}
