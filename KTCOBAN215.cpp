#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll P[1000];

void Permutation(int n, int k){
	ll m=1, carry=0;
	P[0]=1;
	for(int i=n-k+1;i<=n;i++){
		for(int j=0;j<m;j++){
			ll x=P[j]*i+carry;
			P[j]=x%10;
			carry=x/10;
		}
		while(carry){
			P[m++]=carry%10;
			carry/=10;
		}
	}
	for(int i=m-1;i>=0;i--){
		cout<<P[i];
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		Permutation(n,k);
		cout<<endl;
	}
}
