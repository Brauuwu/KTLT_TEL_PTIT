#include<bits/stdc++.h>
using namespace std;

int is_valid(string ip){
	vector<string> ips;
	stringstream ss(ip);
	string token;
	while(getline(ss,token,'.')){
		ips.push_back(token);
	}
	for(string x:ips){
		if(x.length()>3||stoi(x)<0||stoi(x)>255) return 0;
		if(x.length()>1 && stoi(x)==0) return 0;
		if(x.length()>1 && stoi(x)!=0 && x[0]=='0') return 0;
	}
	return 1;
}

int count(string ip){
	int cnt=0, l=ip.length();
	string check=ip;
	for(int i=1;i<l-2;i++){
		for(int j=i+1;j<l-1;j++){
			for(int k=j+1;k<l;k++){
				check=check.substr(0,k)+"."+check.substr(k);
				check=check.substr(0,j)+"."+check.substr(j);
				check=check.substr(0,i)+"."+check.substr(i);
				if(is_valid(check)) cnt++;
				check=ip;
			}
		}
	}
	return cnt;
}

int main(){
	int t; cin>>t;
	while(t--){
		string ip; cin>>ip;
		cout<<count(ip)<<endl;
	}
	return 0;
}
