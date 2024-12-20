#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin>>t;
    while(t--){
    	string s; cin>>s;
    	int sum=0, res=0;
    	for(int i=0; i<s.size(); i++){
    		if(s[i]=='0') sum+=1;
    		else sum-=1;
    		if(sum<0) sum=0;
    		res = max(res, sum);
		}
		if(res==0) cout<<-1<<endl;
		else cout<<res<<endl;
	}
    return 0;
}
