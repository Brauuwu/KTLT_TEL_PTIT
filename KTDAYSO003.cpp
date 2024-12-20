#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

ll C[105][105], a[105];

void Pascal(){
	for(int i=0; i<=100; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i) C[i][j]=1;
			else C[i][j] = C[i-1][j-1]+C[i-1][j];
		}
	}
}

int cnt(int n, int k) {
    sort(a+1, a+n+1);
    int num=a[k];
    int K=0;
    for(int i=k; i>=1; i--){
        if(a[i]==num) K++;
    }
    int N=K;
    for(int i=k+1; i<=n; i++) {
        if(a[i]==num) N++;
    }
    return C[N][K];
}

int main(){
	Pascal();
	int t; cin>>t;
    while(t--){
    	int n, k; cin>>n>>k;
    	for(int i=1; i<=n; i++) cin>>a[i];
    	cout<<cnt(n,k)<<endl;
	}
    return 0;
}
