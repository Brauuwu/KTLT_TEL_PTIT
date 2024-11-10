#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

int n, a[105][105], dist[105][105];

int X[]={-2,-2,-1,-1,1,1,2,2};
int Y[]={-1,1,-2,2,-2,2,-1,1};

bool check(int x, int y){
	if(0<=x && x<n && 0<=y && y<n) return 1;
	return 0;
}

int minPath(int a[][105], int dist[][105], int x1, int y1, int x2, int y2){
	queue<pair<int, int>> q;
	dist[x1][y1]=a[x1][y1];
	q.push({x1, y1});
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<8;i++){
			int xx=x+X[i], yy=y+Y[i];
			if(check(xx,yy)){
				if(dist[x][y]+a[xx][yy]<dist[xx][yy]){
					dist[xx][yy]=dist[x][y]+a[xx][yy];
					q.push({xx,yy});
				}
			}
		}
	}
	if(dist[x2][y2]==oo) return -1;
	return dist[x2][y2];
}

int main(){
    int t; cin>>t;
    while(t--){
    	cin>>n;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin>>a[i][j];
    			dist[i][j]=oo;
			}
		}
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		x1--; y1--; x2--; y2--;
		cout<<minPath(a,dist,x1,y1,x2,y2)<<endl;
	}
    return 0;
}
