#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sum_max(string a,string b){
	for(int i=0;i<a.size();i++){
		if(a[i]=='3') a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='3') b[i]='5';
	}
	int sum=stoi(a)+stoi(b);
	return sum;
}
int sum_min(string a,string b){
	for(int i=0;i<a.size();i++){
		if(a[i]=='5') a[i]='3';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='5') b[i]='3';
	}
	int sum=stoi(a)+stoi(b);
	return sum;
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		cout<<sum_min(a,b)<<" "<<sum_max(a,b)<<endl;
	}
}
