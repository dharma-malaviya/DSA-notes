#include<iostream>
#include<string>
#include<stack>
using namespace std;

string prefixToInfix(string s){
    stack<string> st;
    int n = s.size();

    for(int i=n-1; i>=0; i--){
        char c = s[i];
        if(c == ' '){
            continue;
        }
        
        if((c >= 'A' && c <= 'Z') ||
               (c >= 'a' && c <= 'z') ||
               (c >= '0' && c <= '9')) {
                st.push(string(1, c));
            }
        else{
            string left = st.top();
            st.pop();
            string right = st.top();
            st.pop();

            string expn = "(" + left + c + right + ")";
            st.push(expn);
        }
    }
    return st.top();
}

int main() {
    string s = "*+PQ-MN";
    cout << prefixToInfix(s);
    return 0;
}