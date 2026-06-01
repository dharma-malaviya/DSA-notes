#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//BRUTE FORCE
int sum1(int *arr, int size){
    int maxSum = INT_MIN;
    for (int st = 0; st < size; st++)
    {
        int currSum=0;
        for (int end = st; end < size; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
        
    }
    return maxSum;
}

//Kandane's algorithm
int sum2(int *arr, int size){
    int maxSum=INT_MIN, currSum=0;
    for(int i=0; i<size; i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}

int main() {
    int arr[]= {-2,-1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(int);
    cout << "Brute Force: " << sum1(arr, size);
    cout << endl;
    cout << "Kadane's: " << sum2(arr, size);
    return 0;
}