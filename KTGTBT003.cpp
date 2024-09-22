#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		ll fact=1; float sum=0;
		for(int i=1;i<=n;i++){
			fact*=i;
			sum+=fact;
			float root=1.0/(i+1);
			sum=pow(sum,root);
		}
		cout<<fixed<<setprecision(3)<<sum<<" "<<endl;
	}
	return 0;
}
