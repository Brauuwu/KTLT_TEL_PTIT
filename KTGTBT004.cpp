#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; float x,sum=0,k=1;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			k*=x;
			sum=sqrt(sum+k);
		}
		cout<<fixed<<setprecision(3)<<sum<<""<<endl;
	}
	return 0;
}
