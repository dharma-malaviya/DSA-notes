#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        char chr ='A';
        for (int i = 0; i < n; i++)
        {
            cout << chr << " ";
            chr++;
        }
        cout << endl;
    }
    
    return 0;
}