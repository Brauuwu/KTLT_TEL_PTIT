#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD=1e9+7;

struct matrix{
	ll f[2][2];
	friend matrix operator * (matrix a, matrix b){
		matrix res;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				res.f[i][j]=0;
				for(int k=0;k<2;k++){
					res.f[i][j]+=a.f[i][k]*b.f[k][j];
					res.f[i][j]%=MOD;
				}
			}
		}
		return res;
	}
};

matrix powerMod(matrix a, int n){
	if(n==1) return a;
	if(n%2) return a*powerMod(a,n-1);
	matrix tmp=powerMod(a,n/2);
	return tmp*tmp;
}

int count(ll n){
	if(n==0) return 0;
	if(n<4) return 1;
	matrix a;
	a.f[0][0]=1; a.f[0][1]=1;
	a.f[1][0]=1; a.f[1][1]=0;
	matrix res = powerMod(a,n);
	return res.f[0][1];
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n;cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}
