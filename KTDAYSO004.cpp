#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			auto it=lower_bound(v.begin(), v.end(), x);
			if(it==v.end()) v.push_back(x);
			else *it=x;
		}
		cout<<v.size()<<endl;
	}
	return 0;
}
