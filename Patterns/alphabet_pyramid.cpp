#include<iostream>
using namespace std;

int main() {
    int n=4;
    //Outer loop for printing rows
    for (int i = 0; i < n; i++)
    {
        //1. For printing spaces
        for (int j = 0; j<=n-i-1; j++)
        {
            cout << " ";
        }
        // for printing ascending characters
        for (int j = 0; j < i+1 ; j++)
        {
            cout << (char)('A' + j); // Converts the integer j back to its corresponding ASCII character
        }
        //3. Printing descending char 
        for (int j = i-1; j >=0 ; j--)
        {
            cout << (char)('A'+j);
        }
        cout << "\n";
    }
    
    return 0;
}