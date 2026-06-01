#include<iostream>
using namespace std;
// Calculate sum of numbers from 1 to N

int sum(int n);

int main() {
    int n;
    cout << "Enter number:";
    cin >> n;
    cout << sum(n);
    return 0;
}

int sum(int n){
    int sum=0;
    for (size_t i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
    
}
//coment