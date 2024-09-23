#include<bits/stdc++.h>
#define ll long long
using namespace std;

int isBalanced(string s){
	stack<char> st;
	for(char c:s){
		if(c=='('||c=='['||c=='{') st.push(c);
		else{
			if(st.empty()) return 0;
			char top=st.top();
			st.pop();
			if((c==')'&&top!='(')||(c==']'&&top!='[')||(c=='}'&&top!='{')){
				return 0;
			}
		}
	}
	return st.empty();
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		if(isBalanced(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
