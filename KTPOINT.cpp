#include<bits/stdc++.h>
using namespace std;

class Point{
	private:
		double x,y;
	public:
		void Input(){
			cin>>x>>y;
		}
		double getX(){
			return x;
		}
		void setX(double x){
			this->x=x;
		}
		double getY(){
			return y;
		}
		void setY(double y){
			this->y=y;
		}
};

double dist(Point a, Point b){
	double d=sqrt((a.getX()-b.getX())*(a.getX()-b.getX())+(a.getY()-b.getY())*(a.getY()-b.getY()));
	return d;
}

int main(){
	int n; cin>>n;
	Point A[n];
	for(int i=0;i<n;i++) A[i].Input();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<fixed<<setprecision(2)<<dist(A[i],A[j])<<(j<n-1?" ":"");
		}
		cout<<endl;
	}
	return 0;
}
