#include <iostream>
using namespace std;

int search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]  ==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 7, 5, 85, 8, 45, 32};
    int size = sizeof(arr)/sizeof(int);
    int target = 8;
    cout << search(arr, size, target) << "\n";
    return 0;
}