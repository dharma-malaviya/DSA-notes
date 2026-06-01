#include<iostream>
using namespace std;

int main() {
    int n=4;
    //top half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*(n-i)-2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    //bottom half
    for (int i = n-1; i >= 1; i--)  // Outer loop goes from i=3 to 1
    {
        //1. Left wing 
        for (int j = 0; j < i; j++)  
        {
            cout << "*";
        }
        //2. spaces (increasing gap)
        // spaces = 2*(n-i)
        for (int j = 0; j < 2*(n-i); j++)  
        {
            cout << " ";
        } 
        //3. Right wings(i stars)
        for (int j = 0; j < i; j++)  
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}