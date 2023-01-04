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

// // <<<<<<<<<<<-------------- DEQUES ------------->>>>>>>>>>>

// #include <iostream>
// #include <iterator>
// #include <deque>
// using namespace std;
// void print(deque <int> dq){
//     cout << "The size of the deque is: " << dq.size() << endl;        // TO FIND SIZE OF THE DEQUE.
//     cout << "The size of the deque is: " << dq.max_size() << endl;    // TO FIND MAXIMUM SIZE OF THE DEQUE.
//     cout << "The elements of the deque are : ";
//     for(auto it = dq.begin(); it != dq.end(); it++){                  // TRAVERSING THROUGH THE QUEUE.
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// int main(){
//     // deque <int> dq;                                                // 1.DECLARATION OF THE DEQUE.
//     // dq.push_front(2);                                              // INSERTION OF ELEMENTS INTO THE DEQUE USING push_back AND push_front.
//     // dq.push_back(4);                                             
    
//     // deque <int> dq = {1, 2, 3, 4, 5};                              // 1.INITILIZATION OF THE DEQUE.
//     deque <int> dq {1, 2, 3, 4, 5};                                   // 2.INITILIZATION OF THE DEQUE.
    
//     print(dq);
    
//     dq.pop_front();                                                   // DELETING ELEMENT FROM FRONT.
//     print(dq);
    
//     dq.pop_back();                                                    // DELETING ELEMENT FROM REAR.
//     print(dq);
    
//     cout << "The front element is: " << dq.front() << endl;           // VIEWING THE FRONT ELEMENT.
//     cout << "The rear elemetn is: " << dq.back() << endl;             // VIVEWING THE REAR ELEMENT.
//     dq.insert(dq.begin(), 1);                                         // USE OF insert() INCASE OF DEQUES.
//     print(dq);
//     cout << "The element at 2nd posintion is: " << dq.at(1) << endl;  // 1. VIEWING ELEMENT AT SPECIFIED POSITON.
//     // cout << "The element at 2nd posintion is: " << dq[1] << endl;  // 1. VIEWING ELEMENT AT SPECIFIED POSITON.
//     return 0;
// }



// <<<<<<<<<<<-------------- PRIORITY QUEUES ------------->>>>>>>>>>>

#include <iostream>
#include <iterator>
#include <queue>
using namespace std;
void print(priority_queue <int> dq){
    cout << "The size of the deque is: " << dq.size() << endl;        // TO FIND SIZE OF THE PRIORITYQUEUE.
    cout << "The elements of the deque are : ";
    for(int it = 0; it < dq.size(); it++){                            // TRAVERSING THROUGH THE PRIORITYQUEUE.
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    priority_queue <int> dq;                                     // 1.DECLARATION OF THE PRIORITYQUEUE.
    
    for(int i = 1; i <= 5; i++){
        dq.push(i);                                                // ADDING ELEMENTS TO THE PRIORITYQUEUE.
    }                               
    
    print(dq);
    
    dq.pop();                                                   // DELETING ELEMENT FROM FRONT.
    print(dq);
    
    cout << "The top element is: " << dq.top() << endl;           // VIEWING THE TOP ELEMENT.
    return 0;
}
