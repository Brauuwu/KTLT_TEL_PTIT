#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int res=0, cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') cnt++;
			else{
				if(cnt==0){
					res++;
					cnt++;
				}
				else cnt--;
			}
		}
		res+=cnt/2;
		cout<<res<<endl;
	}
	return 0;
}
