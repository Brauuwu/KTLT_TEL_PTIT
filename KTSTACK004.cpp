#include <bits/stdc++.h>
using namespace std;

int priority(char c){
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return 0;
}

void solve(string s){
    string res="";
    stack<char> st;
    for(char c:s){
        if(isalpha(c)) res+=c;
        else{
            if(c=='(') st.push(c);
            else if(c==')'){
                while(st.top() != '('){
                    res+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && priority(st.top())>=priority(c)){
                    res+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    cout<<res<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        solve(s);
    }
    return 0;
}
