#include<bits/stdc++.h>
using namespace std;

int n,k,x,y,visited[20][20];
int X[]={-2,-2,-1,-1,1,1,2,2};
int Y[]={-1,1,-2,2,-2,2,-1,1};

int check(int x, int y){
	if(1<=x && x<=n && 1<=y && y<=n) return 1;
	return 0;
}

void Try(int x, int y, int step){
	if(step==k+1) return;
	visited[x][y]=1;
	for(int i=0;i<8;i++){
		if(check(x+X[i],y+Y[i])){
			Try(x+X[i],y+Y[i],step+1);
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) visited[i][j]=0;
		}
		cin>>n>>k>>x>>y;
		Try(x,y,0);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(visited[i][j]) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
