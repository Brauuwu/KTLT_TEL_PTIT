#include<bits/stdc++.h>
#define ll long long
using namespace std;

int non_fibo(int n){
	int a=1,b=2,c=3;
	while(n>0){
		a=b;
		b=c;
		c=a+b;
		n-=c-b-1;
	}
	n+=c-b-1;
	return b+n;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<non_fibo(n)<<endl;
	}
	return 0;
}
