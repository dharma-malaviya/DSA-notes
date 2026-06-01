#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {4, 1, 3, 9, 7};

    // Ascending
    sort(v.begin(), v.end());

    // Descending
    sort(v.begin(), v.end(), greater<int>());

    // Display
    for(int x : v) cout << x << " ";
}
