#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[5] = {8,2,10,4,9};
    sort(arr, arr+5, greater<int>());
    for(int a:arr){
        cout << a << "\n"; 
    }

    return 0;
}