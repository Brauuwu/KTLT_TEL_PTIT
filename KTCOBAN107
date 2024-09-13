#include<bits/stdc++.h>
#define ll long long
using namespace std;
int MOD=1e9+7;
ll n,k;
struct matrix{
	ll c[20][20];
};
matrix mul(matrix a,matrix b){
	matrix res;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res.c[i][j]=0;
			for(int l=0;l<n;l++){
				res.c[i][j]+=a.c[i][l]*b.c[l][j];
				res.c[i][j]%=MOD;
			}
		}
	}
	return res;
}
matrix power(matrix a,ll k){
	if(k==1) return a;
	if(k%2) return mul(a,power(a,k-1));
	matrix tmp=power(a,k/2);
	return mul(tmp,tmp);
}
int main(){
	int t; cin>>t;
	matrix a;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ll x; cin>>x;
				a.c[i][j]=x;
			}
		}
		a=power(a,k);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cout<<a.c[i][j]<<" ";
			cout<<endl;
		}
	}
}
