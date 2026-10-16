#include<iostream>
#include<stack>
using namespace std;

int priority(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/' || c == '%') return 2;
    else if(c == '+' || c == '-') return 1;
    else return 0;
}

string infixToPostfix(string s){
    stack<char> st;
    string ans = "";

    for(char c : s){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
            ans += c;
        }
        else if(c == '('){
            st.push(c);

        }
        else if(c == ')'){
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && st.top() != '(' && (priority(st.top()) > priority(c) ||(priority(st.top()) == priority(c) && c != '^'))){
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main() {
    string infix = "a+b*(c^d-e)";
    cout << infixToPostfix(infix);
    return 0;
}
