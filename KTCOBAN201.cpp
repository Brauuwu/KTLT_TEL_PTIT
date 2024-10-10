#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int check(string s){
	int check_digit=0, check_upper=0, check_lower=0, check_symbol=0;
	if(s.size()<8) return 0;
	for(int i=0;i<s.length();i++){
		if(s[i]==s[i+1]) return 0;
		if(isdigit(s[i])) check_digit=1;
		if(isupper(s[i])) check_upper=1;
		if(islower(s[i])) check_lower=1;
		if(!isdigit(s[i]) && !isalpha(s[i])) check_symbol=1;
	}
	if(check_digit&&check_upper&&check_lower&&check_symbol) return 1;
	return 0;
}

int main(){
	freopen("password.in","r",stdin);
	freopen("res.out","w",stdout);
	string s;
	while(cin>>s){
		if(check(s)) cout<<"VALID\n";
		else cout<<"INVALID\n";
	}
	return 0;
}
