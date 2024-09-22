#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int n,m,a[100001],b[100001];

int Search(int x){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x&&a[mid-1]<x) return mid+1;
		if(a[mid]>=x) r=mid-1;
		else l=mid+1;
	}
	return 0;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	for(int i=0;i<m;i++){
		cout<<Search(b[i])<<" ";
	}
	return 0;
}
