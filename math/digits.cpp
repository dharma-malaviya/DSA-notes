#include <iostream>
using namespace std;

void count(int n){
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        count++;
        n=n/10;
    }
    cout << count;
}
void digits(int n){
    int digit;
    while(n>0){
        digit=n%10;
        cout << digit << endl;
        n=n/10;

    }
}
void sum(int n){
    int sum =0, digit;
    while (n>0){
        digit=n%10;
        sum += digit;
        n/=10;
    }
    cout << sum;
}
// Time Complexity= log10(n);
int main()
{
    int n = 515484;
    cout << "Number of digits = ";
    count(n);
    cout << endl;
    digits(n);
    cout << "sum = ";
    sum(n);
    return 0;
}