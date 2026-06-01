#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& arr, int tar, int st, int end){
    int mid = st + (end-st)/2;
    while(st<=end){
        if(arr[mid]==tar){
            return mid;
        }
        else if (arr[mid]<tar)
        {
            return binSearch(arr, tar, mid+1, end);
        }
        else{
            return binSearch(arr, tar, st, mid-1);
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {-1,0,3,5,9,12};
    cout << binSearch(arr, 9, 0, (arr.size()-1));
    return 0;
}