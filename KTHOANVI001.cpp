#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n, X[20], visited[20];

void Result(){
	for(int i=1; i<=n; i++){
		cout<<X[i]<<(i<n ? " ":"\n");
	}
}

void Try(int k){
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			visited[i] = 1;
			X[k] = i;
			if(k==n) Result();
			else Try(k+1);
			visited[i]=0;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		memset(visited, 0, sizeof(visited));
		cin>>n;
		Try(1);
	}
}
