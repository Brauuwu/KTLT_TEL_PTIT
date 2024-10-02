#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		ll l,r; cin>>l>>r;
		ll a=sqrt(l),b=sqrt(r);
		if(a*a<l) a++;
		ll length=b-a+1;
		cout<<length<<endl;
	}
}
