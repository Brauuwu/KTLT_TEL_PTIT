#include <bits/stdc++.h>
#define ll long long
using namespace std;

int MOD=1e9+7;

struct matrix{
    ll f[2][2];
    friend matrix operator * (matrix a, matrix b){
        matrix res;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                res.f[i][j]=0;
                for(int k=0;k<2;k++){
                    res.f[i][j]+=a.f[i][k]*b.f[k][j];
                    res.f[i][j]%=MOD;
                }
            }
        }
        return res;
    }
};

matrix powerMOD(matrix a, int n){
    if(n==1) return a;
    matrix tmp=powerMOD(a, n/2);
    if(n&1) return tmp*tmp*a;
    return tmp*tmp;
}

ll count(int n){
    if(n==0) return 0;
    if(n==1||n==2) return 1;
    n++;
    matrix a;
    a.f[0][0]=1; a.f[0][1]=1;
    a.f[1][0]=1; a.f[1][1]=0;
    matrix res=powerMOD(a, n);
    return res.f[0][1];
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<count(n)<<endl;
    }
    return 0;
}
