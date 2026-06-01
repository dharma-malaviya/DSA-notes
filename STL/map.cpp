#include<iostream>
#include<map>
using namespace std;

int main() {
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 120;
    m.insert({"tablet", 80});
    m.emplace("camera", 55);

    m.erase("headphones"); //erase

    for(auto p : m){
        cout << p.first << " -> " << p.second;
        cout << endl;
    }
    //count
    cout << "count = " << m.count("laptop") << "\n";     
    // find
    if(m.find("camera") != m.end()){
        cout << "found\n";
    } else{
        cout << "not found\n";
    }
    return 0;
}