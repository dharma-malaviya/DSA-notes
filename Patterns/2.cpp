#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int a = 1;
    for (int i = 0; i < n; i++)
    {

        for (int i = 0; i < n; i++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}