#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(string a, string b){
	if(!a.size()||!b.size()) return 0;
	if(b.find(a)==string::npos) return -1;
	else return b.find(a);
}

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]=='"'||s[i]==','||s[i]=='=') s[i]=' ';
		}
		stringstream ss(s);
		string temp,child,parent;
		int check=0;
		while(ss>>temp){
			if(temp!="child"&&temp!="parent"){
				if(!check){
					child=temp;
					check=1;
				}
				else parent=temp;
			}
		}
		cout<<solve(child,parent)<<endl;
    }
}
