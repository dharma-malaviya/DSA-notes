#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> vec = {{3,2},{2,1},{3,1},{7,1},{5,3}};
    sort(vec.begin(), vec.end());
    for(auto v : vec){
        cout << v.first << " " << v.second << "\n";
    }
    return 0;
}
//sorting will be done according to the first element of pair