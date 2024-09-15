#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; double x, sum=0, prod=1;
		cin>>n>>x;
		for(int k=1;k<=n;k++){
			double a=pow(x,k);
			for(int i=1;i<=k;i++) prod*=i;
			sum+=a/prod;
			prod=1;
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
	}
	return 0;
}
