#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums, int tar){
    int st=0, end=nums.size()-1;
    int mid = st + (end-st)/2;
    while(st<end){
        if(nums[mid] < tar){
            st = mid+1;
        }
        else if(nums[mid] > tar){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
}

int main() {
    vector<int> nums={-1, 0, 3, 4, 5, 9, 12};
    int ans = search(nums, 9);
    cout << ans;
    return 0;
}