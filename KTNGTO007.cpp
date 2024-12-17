#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int isPrime(int n){
	if(n<2) return 0;
	if(n==2 || n==3) return 1;
	if(n%2==0 || n%3==0) return 0;
	for(int i=5; i<=sqrt(n); i+=6){
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		int l,r; cin>>l>>r;
		for(int i=r; i>=l; i--){
			if(isPrime(i)){
				cout<<i<<endl;
				break;
			}
		}
	}
}
