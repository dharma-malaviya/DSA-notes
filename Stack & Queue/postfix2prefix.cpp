#include<iostream>
#include<string>
#include<stack>
using namespace std;

string postToPrefix(string s){
    stack<string> st;
    for(char c : s){
        if((c >= 'A' && c <= 'Z') ||
               (c >= 'a' && c <= 'z') ||
               (c >= '0' && c <= '9')) {
                st.push(string(1, c));
            }
        else{
            string right = st.top();
            st.pop();
            string left = st.top();
            st.pop();

            string expn = c + left + right;
            st.push(expn);
        }
    }
    return st.top();
}

int main() {
    string s = "AB-DE+F*/";
    cout << postToPrefix(s);
    return 0;
}