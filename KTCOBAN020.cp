#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ull Prod_max(ull n){
	if(n==0) return 1;
	if(n<10) return n;
	return max(Prod_max(n/10)*(n%10),Prod_max(n/10-1)*9);
}

int main(){
	int t; cin>>t;
	while(t--){
		ull n; cin>>n;
		cout<<Prod_max(n)<<endl;
	}
	return 0;
}
