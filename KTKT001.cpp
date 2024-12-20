#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin>>t;
    while(t--){
    	int n, k; cin>>n>>k;
    	string s; cin>>s;
    	ull X = stoul(s, nullptr, 2);
    	ull Y = (X+k+1) % (1<<n);
    	bitset<50> res(Y);
    	cout << res.to_string().substr(50-n) <<endl;
	}
    return 0;
}
