#include<iostream>
using namespace std;

int SumOfDigits(int num){
    int digSum = 0;

    while (num>0)
    {
        int lastDigit = num % 10; 
        num /= 10;

        digSum += lastDigit;
    }
    return digSum;
}

int main() {
    cout << "sum = " << SumOfDigits(2356);
    return 0;
}
