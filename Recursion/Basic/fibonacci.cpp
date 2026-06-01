#include<iostream>
#include<vector>
using namespace std;

int findFiboacci(int n){  // To find fibaonacci
    if(n==0 || n==1){
        return n;
    }
    return findFiboacci(n-1)+findFiboacci(n-2);
}

vector<int> fibonacci(int n){ // To gather all numbers in vector
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(findFiboacci(i));
    }
    return ans;
}

int main() {
    int n=8;
    vector<int> a=fibonacci(n);
    for (int i = 0; i < a.size(); i++) // to print series
    {
        cout << a[i] << " ";
    }
    
    return 0;
}