#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int max_divisor(int n){
	int res;
	float x = sqrt(n);
	while(n%2==0){
		res = 2;
		n /= 2;
	}
	for(int i=3; i<=sqrt(n); i+=2){
		while(n%i==0){
			res = i;
			n /= i;
		}
	}
	if(n>1) res = n;
	return res > x;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=n; i>=1; i--){
			if(max_divisor(i)){
				cout<<i<<endl;
				break;
			}
		}
	}
}
