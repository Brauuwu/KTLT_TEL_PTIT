#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int cmp(string a, string b){
	string ab=a+b;
	string ba=b+a;
	if(ab.compare(ba)>0) return 1;
	return 0;
}

int main(){
	int t; cin>>t;
	vector<string> store;
	while(t--){
		store.clear();
		int n; cin>>n;
		while(n--){
			string s; cin>>s;
			store.push_back(s);
		}
		sort(store.begin(),store.end(),cmp);
		for(int i=0;i<store.size();i++){
			cout<<store[i];
		}
		cout<<endl;
	}
	return 0;
}
