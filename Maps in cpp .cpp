// PART - I

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

// PART - II
#include <iostream>
#include <vector>
#include <iterator>
#include <map>
using namespace std;
int main(){
    map <int, int> mp1;
    
    for(int i = 1; i <= 5; i++){
        mp1.insert({i, i*7});
    }
    
    // map <int, int> mp2;
    // mp2 = mp1; // 1. COPYING THE MAP.
    map <int, int> mp2(mp1.begin(), mp1.end()); // 2. COPYING THE MP1 INTO MP2.
    
    // ACCESSING THE COPIED MAP.
    cout << "THE ELEMENTS IN MP2 ARE: \n";
    for(auto it = mp2.begin(); it != mp2.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
    
    mp1[6] = 6*7; // AFTER COPYING THE CHANGES MADE IN mp1 DOESN'T REFLECT IN mp2.
    mp2.insert({7, 7*7}); // AFTER COPYING THE CHANGES MADE IN mp2 DOESN'T REFLECT IN mp1.
    
    cout << "THE ELEMENTS IN MP1 AFTER INSERTING NEW ELEMENT ARE: \n";
    for(auto it = mp1.begin(); it != mp1.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
    
    cout << "THE ELEMENTS IN MP2 AFTER INSERTING NEW ELEMENT INTO MP1 AND MP2 ARE: \n";
    for(auto it = mp2.begin(); it != mp2.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
    
    // CONCLUSION : THOUGH MP2 IS COPY OF MP1 THE CHANGES MADE IN MP1 DOESN'T REFLECT IN MP2 AND VIS A VIS.
    
    // USE OF ERASE FUNCTION.
    mp1.erase(mp1.begin(), mp1.find(3)); // LAST ELEMET IS NOT INCLUDED i.e [0, 3).
    cout << "THE ELEMENTS IN MP1 AFTER ERASING ARE: \n";
    for(auto it = mp1.begin(); it != mp1.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
    
    mp2.erase(7); // REMOVE ALL ELEMETS WITH KEY 7.
    cout << "THE ELEMENTS IN MP2 AFTER ERASING ARE: \n";
    for(auto it = mp2.begin(); it != mp2.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
    
    // CONCLUSION: erase WHILE TAKING TWO ARGUMENTS TAKES (iterator, position). WHILE TAKING ONE ARGUMENT TAKES ONLY KEYVAALUE.
    return 0;
}
