#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void printLinkedList(list <int> l){
    for(auto it = l.begin(); it != l.end(); it++)
    cout << *it << " ";
    cout << endl;
}
int main(){
    list <string> names;                                            // 1. DECLARATION OF THE LIST.
    list <int> li1 {1, 2, 3, 4, 5};                                 // 2. DECLARATION AND INITIALIZATION OF THE LIST.
    
    for(auto it = li1.begin(); it != li1.end(); it++)               // 3. TRAVERSING OF THE LIST.
    cout << *it << " ";
    cout << endl;
    
    auto itr = li1.begin();                                         // 4. POINTING AN ITERATOR TO THE FIRST ELEMENT OF THE LIST.
    li1.insert(itr, 0);                                             // 5. INSERTING AN ELEMENT BEFORE AN ELEMENT POINTING TO itr.
    
    auto itr1 = next(itr, -1);                                      // 6. NEXT RETURNS A NEW ITERATOR n POSITIONS AWAY FROM PRESENT ITERATOR.(DEC AND INC)
    li1.insert(itr1, 2, 3);
    
    auto itr2 = li1.begin();                                        // 7. ADVANCES ITERATOR BY n POSITIONS. (DEC AND INC)
    advance(itr2, li1.size()-1);
    li1.insert(itr2, 7);
    
    cout << li1.size() << endl;
    list <int> li2 = {6, 7, 8};
    li1.insert(itr, li2.begin(), li2.end());                        // 8. INSERTING A LIST INSIDE ANOTHER LIST.
    printLinkedList(li1);
    
    list <int> li3, li4;
    for(auto it = li2.begin(); it != li2.end(); it++){
        li3.push_back(*it * 2);
        li4.push_front(*it * 3);
    }
    printLinkedList(li3);
    printLinkedList(li4);
    
    // list <int> li2;
    return 0;
}
