#include<iostream>
#include<vector>
using namespace std;

//Product of an array except self
//brute force 
vector<int> prod1(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n);
    
    for(int i=0; i<n; i++){
        int prod=1;
        for(int j=0; j<n; j++){
            if(i!=j){
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
return ans;
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    vector<int> ans1 = prod1(nums);
    cout << "Brute Force:" << endl;
    for(int val : ans1){
        cout << val << " ";
    }

    return 0;
}