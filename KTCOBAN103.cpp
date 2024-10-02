#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll a[100001];
int cnt[100001];
void Init(){
	memset(cnt,0,sizeof(cnt));
	int m=1, carry=0;
	a[0]=1;
	cnt[0]=cnt[1]=1;
	for(int i=2;i<=1000;i++){
		for(int j=0;j<m;j++){
			ll x=a[j]*i+carry;
			a[j]=x%10;
			carry=x/10;
		}
		while(carry>0){
			a[m++]=carry%10;
			carry/=10;
		}
		cnt[i]=m;
	}
}

int main(){
	Init();
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v;
		for(int i=0;i<=10000;i++){
			if(cnt[i]==n) v.push_back(i);
			else if(cnt[i]>n) break;
		}
		if(!v.size()) cout<<"NO\n";
		else{
			cout<<v.size()<<" ";
			for(int x:v) cout<<x<<" ";
			cout<<endl;
		}
	}
	return 0;
}
