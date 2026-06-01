#include<iostream>
#include<vector>
using namespace std;

int main() {
    //Ways to initialize vectors
    vector<int> v = {1,2,3,4,5,6,7,8};
    cout << *v.begin() << endl;
    // vector<int> v(5,10);
    //vetcor<int> v2(v1); Makes vector 2 with value of 1. 
    
    // v.push_back(1);
    // v.emplace_back(2);
    // v.emplace_back(3);
    // v.emplace_back(4);
    // v.emplace_back(5);

    // v.pop_back();

    v.erase(v.begin()+1);
    v.insert(v.begin()+1,18);

    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }   
    cout << endl;

    cout << "Second element:" << v[1] << endl;
    cout << "First:" << v.front() << endl;
    cout << "Last:" << v.back() << endl;
    cout << "capacity of vector:" << v.capacity() << endl; //Whenever vector gets filled it increases it's size to double.
    cout << "size of vector:" << v.size() << endl;
    cout << "is empty: " << v.empty() <<endl; //1 -> empty, 0 -> not empty

    cout << "using v.begin(): " << *(v.begin()) << endl;
    cout << "using v.end(): " << *(v.end()) << endl;

    //Making Iterators
    vector<int>::iterator itr;  //instead of initializing we can simply write auto.
    for(itr = v.begin(); itr != v.end(); itr++) {
      cout << *(itr) << " " ;
    }
    cout << endl;
    //REVERSE Iterator
    for(auto itr =v.rbegin(); itr != v.rend(); itr++){  //'auto' is replacement of vector<int>::reverse_iterator itr.
      cout << *(itr) << " " ;
    }
    cout << endl;
     return 0;
}