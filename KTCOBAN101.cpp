#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	int t; cin>>t;
	int cnt[10];
	while(t--){
		memset(cnt,0,sizeof(cnt));
		int a,b; cin>>a>>b;
		if(a>b) swap(a,b);
		for(int i=a;i<=b;i++){
			string s=to_string(i);
			for(int j=0;j<s.length();j++){
				cnt[s[j]-'0']++;
			}
		}
		for(int i=0;i<10;i++){
			cout<<cnt[i]<<(i<9?" ":"\n");
		}
	}
	return 0;
}
