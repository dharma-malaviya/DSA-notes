#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int sum=0, count = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            sum += nums[i];
            int val = sum - k;

            if(m.count(val)){
                count += m[val];
            }
            m[sum]++;
        }
        return count;
}

int main() {
    vector<int> nums = {9,4,0,20,3,10,5};
    int target = 33;
    cout << subarraySum(nums, target);
    return 0;
}
