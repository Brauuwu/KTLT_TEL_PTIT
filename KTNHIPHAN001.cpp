#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ull count(int n, string x, string y){
	ull sum_x=0,sum_y=0;
	for(int i=0;i<n;i++){
		if(x[i]=='1') sum_x|=1<<(n-1-i);
		if(y[i]=='1') sum_y|=1<<(n-1-i);
	}
	if(sum_x==sum_y) return 0;
	return (sum_x>sum_y)?(sum_x-sum_y-1):(sum_y-sum_x-1);
} 
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string x,y; cin>>x>>y;
		cout<<count(n,x,y)<<endl;
	}
}
