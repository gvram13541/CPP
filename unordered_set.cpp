#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
void print(unordered_set <int> s1){
    if(s1.empty()){ // CHECKING WHETHER THE SET IS EMPTY OR NOT.
        cout << "THE SET IS EMPTY.\n";
    }
    else{
        cout << "THE SIZE OF THE SET IS: " << s1.size() << endl;  // SIZE OF THE SET.
        cout << "THE MAXIMUM SIZE OF THE SET IS: " << s1.max_size() << endl; // MAXIMUM SIZE OF THE SET.
        for(auto it = s1.begin(); it != s1.end(); it++){
            cout << (*it) << " ";
        }
        cout << endl;
    }
}

int main(){
    unordered_set <int> s1; // DECLARATION OF THE SET.
    
    
    // unordered_set <int> s1 {1, 3, 2, 4, 3, 5}; // 1.INITILIZATION OF THE SET.
    s1 = {1, 3, 2, 4, 3, 5}; // 2.INITILIZATION OF THE SET.
    // cout << "ENTER THE SET VALUES: ";
    // for(int i = 1; i <= 16; i++){
    //     char c;
    //     cin >> c;
    //     s1.insert(c);  // 3.INITILIZATION OF THE SET.
    // }
    int a[] = {2, 5, 3, 7, 1};
    unordered_set <int> s4(a, a+(sizeof(a)/sizeof(a[0]))); // 4.INITILIZATION OF THE SET.
    
    print(s1);  // 1. ACCESSING THE ELEMENTS FORM THE SET.
    
    
    unordered_set <int> s2(s1.begin(), s1.end()); // 2.ASSINGINING THE ELEMENTS FROM S1 TO S2.
    // s2 = s1; // 1.ASSINGINING THE ELEMENTS FROM S1 TO S2.  // AFTER ASSINGINING BOTH ARE INDEPENDNT i.e THE CHANGES MADE IN ONE DOESN'T REFLECT IN OTHER.
    
    
    s1.clear(); // DELETING THE WHOLE SET.
    
    
    print(s1);
    print(s2);
    
    
    // <<<<<<<<<<<<<---------------------------------------------------------------------------->>>>>>>>>>>
    
    
    set <int, greater<int>> s3;  // DECLARTION TO PRINT ELEMENTS IN THE DESCENDING ORDER.
    s3 = {5, 34, 67, 394, 34, 544, 56};
    for(auto &val: s3){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
