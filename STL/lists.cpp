#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l1 ={1,2,3,4,5,6,7};
    // l1.emplace_back(1);
    // l1.emplace_back(2);
    // l1.emplace_back(3);
    // l1.emplace_back(4);
    // l1.emplace_back(5);
    // l1.push_back(6);
    // l1.push_back(7);

    for(int val : l1){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}