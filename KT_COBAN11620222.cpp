#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int f[93];
void Init(){
	f[1]=1;
	f[2]=1;
	for(int i=3;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
}

char find(int n, int i){
	while(n>2){
		if(i<=f[n-2]) n-=2;
		else{
			i-=f[n-2];
			n--;
		}
	}
	return (n==1)?'A':'B';
}

int main(){
	Init();
	int t; cin>>t;
	while(t--){
		int n,i; cin>>n>>i;
		cout<<find(n,i)<<endl;
	}
	return 0;
}
