#include <iostream>
using namespace std;
// 153, 371, 1
bool isArmstrong(int n)
{
    int copyN = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += (digit * digit * digit);
        n = n / 10;
    }
    return sum == copyN;
}

int main()
{
    int n = 153;
    if (isArmstrong(n))
    {
        cout << "is an Armstrong number.";
    }
    else
    {
        cout << "is not an Armstrong number.";
    }

    return 0;
}
//Time Complexity = log10(n)