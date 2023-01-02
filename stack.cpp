#include <iostream>
#include <stack>
using namespace std;
void print(stack <string> s){
    cout << "The size of the stack is: " << s.size() << endl; // GIVES THE SIZE OF THE STACK.
    int i = 5;
    while(!s.empty()){                                        // IF THE STACK IS EMPTY IT RETURNS 1(TRUE) IF NOT RETURNS 0(FALSE).
        cout << s.top() << endl;                              // RETURNS TOP MOST ELEMENT OF THE STACK.
        s.pop();                                              // DELETES THE TOP MOST ELEMENT OF THE STACK.
    }
}

int main(){
    stack <string> s;                                         // DECLARATION OF THE STACK.
    cout << "enter the elements into the stack.\n";            
    for(int i = 1; i <= 5; i++){
        string str;
        cin >> str;
        s.push(str);                                          // ADDS ELEMENT TO THE STACK.
    }
    print(s);
    return 0;
}
