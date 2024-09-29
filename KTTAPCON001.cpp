#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	map<int,int> cnt;
	while(t--){
		cnt.clear();
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			cnt[a[i]]++;
		}
		sort(a,a+n);
		ll sum=1;
		for(auto x:cnt) sum*=x.second+1;
		sum--;
		cout<<sum<<" [";
		for(int i=0;i<n;i++) cout<<a[i]<<(i<n-1?", ":"]\n");
	}
}
