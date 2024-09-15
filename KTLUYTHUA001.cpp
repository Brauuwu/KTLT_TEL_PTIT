#include<bits/stdc++.h>
#define ll long long
using namespace std;

// Hàm nhân 2 chuỗi số lớn
string MUL(string a, string b){
    if(a == "0" || b == "0") return "0";
    string res(a.size() + b.size(), '0');
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = 0; i < b.size(); i++){
        int carry = 0;
        for(int j = 0; j < a.size(); j++){
            int x = (a[j] - '0') * (b[i] - '0') + carry + (res[i + j] - '0');
            res[i + j] = x % 10 + '0';
            carry = x / 10;
        }
        if(carry) res[i + a.size()] += carry;
    }

    reverse(res.begin(), res.end());
    // Xóa các số 0 ở đầu kết quả
    while(res[0] == '0') res.erase(res.begin());
    return res;
}

// Hàm tính lũy thừa của một số lớn
string power(ll a, ll n){
    if(a == 0) return "0";  // Trường hợp a = 0
    if(n == 0) return "1";  // Trường hợp n = 0, a^0 = 1
    string s = to_string(a);
    if(n == 1) return s;
    if(n % 2) return MUL(s, power(a, n - 1)); // Nếu n là số lẻ
    string tmp = power(a, n / 2);             // Nếu n là số chẵn
    return MUL(tmp, tmp);
}

int main(){
    int t;
    cin >> t;  // Nhập số lượng test
    while(t--){
        ll a, n;
        cin >> a >> n;  // Nhập a và n
        string res = power(a, n);
        cout << res << endl;
    }
    return 0;
}
