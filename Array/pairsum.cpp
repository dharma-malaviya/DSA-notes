#include<iostream>
#include<vector>
using namespace std;

//Bruteforce
vector<int> pairSum1(int *arr,  int size, int target){
     vector<int> ans;

    for (int i = 0; i < size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    return ans;
    
}

vector<int> pairSum2(int *arr,  int size, int target){
    vector<int> ans2;
    int i=0, j= size-1;
    int pairSum=0;
    while(i<j){
        int PS = arr[i]+arr[j];
        if(PS<target){
            i++;
        }
        else if(PS>target){
            j--;
        }
        else{
            ans2.push_back(arr[i]); 
            ans2.push_back(arr[j]);
            break;
        }
    }
    return ans2;
    }


int main() {
    int arr[4]={2,7,11,15};
    int n=4;
    int target=26;

    vector<int> ans = pairSum1(arr, n, target);
    cout << "Brute Force: ";
    for (int val : ans){
      cout << val << ",";
    }
  cout << endl;

    vector<int> ans2 = pairSum2(arr, n, target);
    cout << "Optimal : ";
    for (int val : ans2){    
        cout << val << ",";
    }
    return 0;
}