#include <iostream>
using namespace std;

int main()
{
    int no, sum = 0;
    cout << "Enter number:";
    cin >> no;
    for (int i = 1; i <= no; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "OddSum =" << sum << endl;
    return 0;
}
