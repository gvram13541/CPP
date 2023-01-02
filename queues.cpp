#include <iostream>
#include <iterator>
#include <queue>
using namespace std;

                // <<<<<---------LINEAR QUEUES--------->>>>> //

void print(queue <string> q){
    cout << "The size of the stack is: " << q.size() << endl; // GIVES THE SIZE OF THE QUEUE.
    int i = 5;
    while(!q.empty()){                                        // IF THE QUEUE IS EMPTY IT RETURNS 1(TRUE) IF NOT RETURNS 0(FALSE).
        cout << q.front() << endl;                              // RETURNS FRONT MOST ELEMENT OF THE QUEUE.
        q.pop();                                              // DELETES THE FIRST ADDED ELEMENT TO THE QUEUE.
    }
}

int main(){
    queue <string> q;                                         // DECLARATION OF THE QUEUE.
    cout << "enter the elements into the stack.\n";            
    for(int i = 1; i <= 5; i++){
        string str;
        cin >> str;
        q.push(str);                                          // ADDS ELEMENT TO THE QUEUE.
    }
    print(q);
    cout << "The front element of the queue is: " << q.front() << endl; // RETURNS THE FIRST ADDED ELEMENT OF THE QUEUE.
    cout << "The last element of the queue is: " << q.back() << endl;   // RETURNS THE LAST ADDED ELEMENT OF THE QUEUE.
    return 0;
}
