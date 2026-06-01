#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n==0 || n==1){
        return true;
    }

    return arr[n-1]>=arr[n-2] && isSorted(arr, n-1);
}

int main() {
    vector<int> arr = {10,15,20,25,30,40};
    cout << isSorted(arr, arr.size());
    return 0;
}

//TC=O(n)  SC=O