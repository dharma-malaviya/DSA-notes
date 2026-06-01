#include<iostream>
using namespace std;

double pow(double x, int n){
    long binForm = n;
    double ans = 1;

    if(binForm < 0){
        x = 1/x;
        binForm = -binForm;
    }

    while (binForm>0)
    {
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

return ans;    
}

int main() {
    cout << pow(3, 5);
    return 0;
}