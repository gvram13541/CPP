#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map <int, int> um; 
    
    // um = { make_pair(1,2), make_pair(3, 4), make_pair(5, 6), make_pair(7, 8), make_pair(9, 10) }; // 1.INITILIZATION
    // unordered_map <int, int> um { make_pair(1,2), make_pair(3, 4), make_pair(5, 6), make_pair(7, 8), make_pair(9, 10) }; // 2.INITILIZATION
    um.insert({{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}}); // 3.INITILIZATION
    // um.insert({ make_pair(1,2), make_pair(3, 4), make_pair(5, 6), make_pair(7, 8), make_pair(9, 10) }); // 4.INITILIZATION
    // um[1] = 2;
    // um[3] = 4;
    // um[5] = 6; // 5.INITILIZATION
    // um[7] = 4+4;
    // um[9] = 10;
    
    // for(auto &val: um){
    //     cout << val.first << " " << val.second << endl; // 1. ACCESSING THE ELEMENTS FROM THE UNORDERED MAP.
    // }
    
    for(auto &[key, value]: um){
        cout << key << " " << value << endl; // 2. THIS CASE OF ACCESSING OF ELEMENTS FROM THE UNORDERED MAP IS GRANTED IN CPP 17 AND ABOVE VERSIONS.
    }
    return 0;
}

// ALL OTHER METHODS USAGE IS SAME AS MAP'S METHODS USAGE.
