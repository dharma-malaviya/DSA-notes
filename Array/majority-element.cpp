#include<iostream>
#include<vector>
using namespace std;

//Brute force
int majority1(int *arr, int n){
    int freq=0, ans=0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j]){
                freq++;
            }
        }
    if(freq>n/2){
        ans=arr[i];
        break;
    }
    }
return ans;
}

//Moore's voting algorithm
int majority2(int *arr, int n){
        int freq=0, ans=0;
        for(int i=0; i<n ; i++){
           
            if(freq==0){
                ans=arr[i];
            }

            if(ans==arr[i]){
                freq++;
            }
            else{
                freq--;     
            }
        }
        
        int count=0;
        for(int i=0; i<n; i++){
            if(ans==arr[i])
            count++;
        }
        if(count > n/2){
            return ans;
        }
        else {return -1;}
}


int main() {
    int arr[5] = {1,2,2,1,1,};
    int n = sizeof(arr)/sizeof(int);

    cout << "Brute force: " << majority1(arr, n);
    cout << endl;
    cout << "Moore's Algorithm: " << majority2(arr, n);

    return 0;
}