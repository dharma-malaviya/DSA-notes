#include<iostream>
using namespace std;

int main() {
    pair <int, int> p = {3,4};
    cout << p.first << " " << p.second << "\n";

    pair <int, pair <int, int>> a = {1, {3,4}};
    cout << a.first << " " << a.second.first << " " << a.second.second << "\n";

    pair <int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second;

    return 0;
}