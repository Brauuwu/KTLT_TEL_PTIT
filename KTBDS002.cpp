#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

ll C[100][100];

void Pascal(){
	for(int i=0; i<=100; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i) C[i][j]=1;
			else C[i][j] = C[i-1][j] + C[i-1][j-1];
		}
	}
}

int main(){
	Pascal();
	int t; cin>>t;
    while(t--){
    	int n, k; cin>>n>>k;
    	cout<<C[n+k-1][n]<<endl;
	}
    return 0;
}
