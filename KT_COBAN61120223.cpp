#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD=1e9+7,n;

struct matrix{
	ll f[2][2];
};

matrix MUL(matrix a, matrix b){
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

matrix power(matrix a, int n){
	if(n==0||n==1) return a;
	if(n%2) return MUL(a,power(a,n-1));
	matrix tmp=power(a,n/2);
	return MUL(tmp,tmp);
}

ll fibo(ll n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(n>1) n--;
	matrix a;
	a.f[0][0]=1; a.f[0][1]=1; a.f[1][0]=1; a.f[1][1]=0;
	matrix res=power(a,n);
	return res.f[0][0];
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		cout<<fibo(n)<<endl;
	}
	return 0;
}
