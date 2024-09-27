#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[100001];
string s[100000];

void ktao(){
    ll m = 1, q, r = 0;
    a[0] = 1;
    for(int i = 2; i <= 10000; i++){
        for(int j = 0; j < m; j++){
            q = a[j] * i + r;
            a[j] = q % 10;
            r = q / 10;
        }
        while(r > 0){
            a[m] = r % 10;
            m++;
            r /= 10;
        }
        for(int j = m - 1; j >= 0; j--){
            s[i] += char(a[j] + '0');
        }
    }
}

int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 0 || n == 1) cout << 1 << endl;
        else cout << s[n] << endl;
    }
}
