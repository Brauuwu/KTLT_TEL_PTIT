#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int count(int n,int m,int exp){
	if(n==0||exp==0) return 1;
	if(n>=pow(m,exp)) return count(n-pow(m,exp),m,exp)+count(n,m,exp-1);
	else return count(n,m,exp-1);
}

int main(){
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		int tmp=1, exp=-1;
		while(tmp<=n){
			tmp*=m;
			exp++;
		}
		cout<<count(n,m,exp)<<endl;
	}
	return 0;
}
