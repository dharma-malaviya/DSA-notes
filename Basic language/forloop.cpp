#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter number:";
    cin >> no;
    int sum = 0;
    for (int i = 0; i <= no; i++)
    {
        sum = sum + i;
    }
    
    cout << "Sum is " << sum << endl;

}