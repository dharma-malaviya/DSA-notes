#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &arr, int N, int M, int maxAllowedTime){
    int painter = 1, time = 0;
    for (int i = 0; i < N; i++)
    {
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= M ? true : false;
    
}

int minTimeToPaint(vector <int> &arr, int N, int M){
    int sum=0, max = INT_MIN;

    if(N<M){
        return -1;
    }

    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    int ans = -1;
    int st = max, end = sum;
    while(st <= end){
       int mid = st + (end-st)/2;
       if(isPossible(arr, N, M, mid)){  //left
        ans = mid;
        end = mid - 1;
       }
       else{  //right
        st = mid + 1;
       }
       }
       return ans;
    }



int main() {
    vector <int> arr = {40, 30, 10, 20};
    int N=arr.size(), M=2;
    cout << minTimeToPaint(arr, N, M);
    return 0;
}