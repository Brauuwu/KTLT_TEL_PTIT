#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n, m, C[505][505], cmin=INT_MAX, Fopt=INT_MAX;
int s[505], visited[505], X[505];

void Try(int k){
	for(int i=2;i<=n;i++){
		if(visited[i]==0 && C[X[k-1]][i]!=0){	//if there is no cost then skip
			visited[i]=1; //Mark
			X[k]=i;	//Append city
			s[k]=s[k-1]+C[X[k-1]][X[k]]; //Trip cost between 2 cities
			if(k==n){ //Update record
				if(C[X[n]][1]) Fopt=min(Fopt,s[k]+C[X[n]][1]);
			}
			else if(s[k]+(n-k+1)*cmin<Fopt){ //if Lower bound < Fopt -> check
				Try(k+1);
			}
			visited[i]=0; //Unmark
		}
	}
}

int main(){
	memset(visited,0,sizeof(visited));
	memset(s,0,sizeof(s));
	cin>>n>>m;
	while(m--){
		int i,j,c; cin>>i>>j>>c;
		C[i][j]=c;
		cmin=min(cmin,C[i][j]);
	}
	visited[1]=1; X[1]=1; //Start from 1th city
	Try(2);
	cout<<Fopt;
	return 0;
}
