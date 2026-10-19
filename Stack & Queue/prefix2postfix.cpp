#include<iostream>
#include<string>
#include<stack>
using namespace std;

string prefixToPostfix(string s){
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

            string expn = left + right + c;
            st.push(expn);
        }
    }
    return st.top();
}

int main() {
    string s = "/-AB*+DEF";
    cout << prefixToPostfix(s);
    return 0;
}