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

                      // <<< ----------------- IMPLEMENTATION OF STACK USING TWO QUEUES ----------------- >>> //

#include <iostream>
#include <queue>

class Stack{
    queue <int> q1;
    queue <int> q2;
    
    public:
    void Push(int x){
        q1.push(x);
    }
    
    int Pop(){
        int val;
        
       if(q1.empty())
           return -1;
        
        while(!q1.empty()){
            val = q1.front();
            q1.pop();
            if(!q1.empty())
            q2.push(val);
        }
        
        while(!q2.empty()){
            int temp = q2.front();
            q1.push(temp);
            q2.pop();
        }
        
        return val;
    }
    
};

int main(){
    Stack s;
    int x, ans;
    
    cout << "Enter the operation you wanna perform\n";
    cout << "1.PUSH\n2.POP\n";
    
    int choice;
    cin >> choice;
    
    switch(choice){
        case 1:
            cout << "Enter the value to pushed\n";
            cin >> x;
            s.Push(x);
        break;
     
        case 2:
            ans = s.Pop();
            cout << "The value popped is " << ans << ".\n";
        break;
       
        default:
            cout << "Invalid choice.\n";
    }
    
    return 0;
}
    
    
