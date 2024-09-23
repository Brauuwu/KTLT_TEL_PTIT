#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,a[100001]; cin>>n;
		int cnt_p=0, cnt_n=0, cnt_z=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) cnt_p++;
			else if(a[i]<0) cnt_n++;
			else cnt_z++;
		}
		if(cnt_p==n||cnt_n==n) cout<<0;
		else if(cnt_z) cout<<-1;
		else if(cnt_p>=cnt_n) cout<<cnt_n;
		else cout<<cnt_p;
		cout<<endl;
	}
	return 0;
}
