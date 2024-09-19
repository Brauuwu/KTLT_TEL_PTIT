#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100],n,k;

ll C(int n, int k){
	if(k==0||k==n) return 1;
	if(k==1||k==n-1) return n;
	return C(n-1,k)+C(n-1,k-1);
}
void Out(){
	cout<<"[";
	for(int i=1;i<=k;i++){
		cout<<a[i];
		if(i<k) cout<<" ";
	}
	cout<<"]\n";
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) Out();
		else Try(i+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		cin>>n>>k;
		cout<<C(n,k)<<endl;
		Try(1);
    }
}
