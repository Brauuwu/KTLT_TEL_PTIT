#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int n,m,b[100005];
pair<int,int> a[100005];

int BinarySearch(int x){
	int l=1, r=n;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid].first==x && a[mid-1].first<x) return mid;
		if(a[mid].first>=x) r=mid-1;
		else l=mid+1;
	}
	return 0;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++) cin>>b[i];
	for(int i=1;i<=m;i++){
		int x=BinarySearch(b[i]);
		cout<<a[x].second<<" ";
	}
	return 0;
}
