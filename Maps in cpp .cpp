#include <iostream>
#include <vector>
#include <iterator>
#include <map> // TO USE MAPS IN CPP WE HAVE TO INCLUDE THIS HEADER FILE.
using namespace std;
int main(){
    map <int, int> mp; // DECLARATION OF THE MAP.
    
    // mp["one"] = 1;
    // mp["two"] = 2;  // 1.INITIALIZATION OF MAP. map <string, int> mp;
    // mp["three"] = 3;
    // mp["four"] = 4;
    // mp["five"] = 5;
    
    // for(int i = 1; i <= 5; i++){
    //     mp.insert({i, i+6});      // 2.INITIALIZATION OF MAP USING insert() FUNCTION.
    // }
    
    // for(int i = 1; i <= 15; i++){
    //     mp.insert(pair<int, int>(i, i*10)); // 3.INITIALIZATION OF MAP USING pair DATASTRUCTURE.
    // }
    
    
    
    cout << "KEY\tVALUE\n";
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << "\t" << it -> second << endl; // ACCESSING THE ELEMENTS FROM THE MAP.
    }
    
    cout << "SIZE OF THE MAP IS: " << mp.size() << endl;  //TO FIND THE PRESENT SIZE OF THE MAP.
    cout << "SIZE OF THE MAP IS: " << mp.max_size() << endl;  //TO FIND THE MAXIMUM SIZE OF THE MAP.
    cout << "IS EMPTY: " << mp.empty() << endl;  // CHECK WHETHER MAP IS EMPTY OR NOT. IF EMPTY RETURNS 1 ELSE O.
    cout << "CLEAR FUNCTION: " << mp.clear();  // CLEAR FUCTION CLEARS ALL ELEMENTS IN THE MAP.
    return 0;
}
