#include<iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {14,81,98,45,16};

    int largest = INT_MIN;
    int seclarge = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (seclarge < arr[i] && arr[i] != largest)
        {
            seclarge = arr[i];
        }
    }
    
        
    cout << largest << "\n";
    cout << seclarge << "\n";

    return 0;
}
