#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist){
    int count = 1, lastPos = arr[0];

    for(int i=0; i<N; i++){
        if(arr[i]-lastPos >= minAllowedDist){
            count++;
            lastPos = arr[i];
        }
        if(count==C){
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int C, int N){
    sort(arr.begin(), arr.end());

    int st=1, end=arr[N-1]-arr[0], ans=-1;

    while(st<=end){
        int mid = st +(end-st)/2;
        
        if(isPossible(arr, N, C, mid)){  // right
            st = mid+1;
            ans = mid;
        }
        else{  //left
            end = mid-1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,8,4,9};
    int N=5, C=3;
    cout << getDistance(arr, C, N) << endl;
    return 0;
}