#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; float x,sum=0,top=1;
		cin>>n>>x;
		for(int k=1;k<=n;k++){
			top*=x;
			int bottom=k*(k+1)/2;
			sum+=top/bottom;
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
	}
	return 0;
}
