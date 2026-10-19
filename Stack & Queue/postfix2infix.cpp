#include<iostream>
#include<stack>
#include<string>
using namespace std;

string postfixToInfix(string s){
    stack<string> st;
    for(char c : s){
        if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9'){
            st.push(string(1,c));
        }
        else{
            string right = st.top();
            st.pop();
            string left = st.top();
            st.pop();

            string expr = "(" + left + c + right + ")";
            st.push(expr);
        }
    }
    return st.top();
}

int main() {
    string s = "AB-DE+F*/";
    cout << postfixToInfix(s);
    return 0;
}