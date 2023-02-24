// <<<<<<<<<<< SINGLY LINKED LIST >>>>>>>>>>>>>> //

// 1.Program to illustrate singly linked list.

#include <iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    
    Node(){
        data = 0;
        next = NULL;
    }
    
    Node(int val){
        data = val;
        next = NULL;
    }
    
};

void insertAtEnd(Node *head, int val){
    Node *newNode = new Node;
    Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> data = val;
    newNode -> next = NULL;
}

void printLinkedList(Node *head){
    Node *temp = head;
    if(head == NULL)
    cout << "Empty linked list\n";
    while(temp != NULL){
        cout << "[" << temp -> data;
        temp = temp -> next;
        cout << "|" << temp << "]" << " => "; 
    }
}

int main(){
    Node* node1 = new Node(7);
    Node *head  = node1;
    cout << "head: " << head << endl;
    insertAtEnd(head, 8);
    insertAtEnd(head, 9);
    printLinkedList(head);
    
    return 0;
}


// 2. singley linked list global head.

#include <iostream>
#include <unordered_map>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Linkedlist{
    public:
    Node *head = NULL;
    
    void insertAtEnd(int val){
        Node *newNode = new Node;
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *ptr = head;
            while(ptr -> next != NULL)
            ptr = ptr -> next;
            ptr -> next = newNode;
        }
        newNode -> data = val;
        newNode -> next = NULL;
    }
    
    void displayLinkedlist(){
        Node *ptr = head;
        cout << "head: " << head << endl;
        while(ptr != NULL){
            cout << "[" << ptr -> data << "|";
            ptr = ptr -> next;
            if(ptr != NULL)
            cout << ptr << "]" << " => ";
            else
            cout << ptr << "]\n";
        }
        
    }
    
    bool search(int val) {
        Node *ptr = head;
        while (ptr != NULL) {
            if (ptr->data == val)
            return true;
            ptr = ptr->next;
        }
        return false;
    }
    
    void insertAtFront(int val){
        Node *newNode = new Node;
        newNode -> data = val;
        newNode -> next = head;
        head = newNode;
    }
    
    void deleteNode(int val){
        Node *ptr1 = head;
        Node *ptr2 = NULL;
        while(ptr1 -> data != val){
            ptr2 = ptr1;
            ptr1 = ptr1 -> next;
        }
        if(ptr2 == NULL){
            head = ptr1 -> next;
            free(ptr1);
        }
        else{
            ptr2 -> next = ptr1 -> next;
            free(ptr1);
        }
    }
    
    int lengthOfLinkedList(){
        Node *ptr = head; 
        int count = 0;
        while(ptr != NULL){
            ptr = ptr -> next;
            count++;
        }
        return count;
    }
    
    void mergeLinkedlist(Linkedlist list){
        Node *ptr = list.head;
        while(ptr != NULL){
            insertAtEnd(ptr -> data);
            ptr = ptr -> next;
        }
    }
    
    void reverseALinkedlist(){
        Node *ptr1 = NULL;
        Node *ptr2 = head;
        Node *ptr3 = head -> next;
        while(ptr2 != NULL){
            ptr2 -> next = ptr1;
            ptr1 = ptr2;
            ptr2 = ptr3;
            if(ptr3 != NULL)
            ptr3 = ptr3 -> next;
        }
        cout << "head: " << ptr1 << endl; 
        while(ptr1 != NULL){
            cout << "[" << ptr1 -> data << "|";
            ptr1 = ptr1 -> next;
            if(ptr1 != NULL)
            cout << ptr1 << "]" << " => ";
            else
            cout << ptr1 << "]\n";
        }
    }
    
    void reverseKNodes(){
        Node *ptr1 = head;
        int K;
        cin >> K;
        while(ptr1 != NULL){
            for(int i = K; i >= 1; i--){
                Node *ptr2 = ptr1;
                for(int j = 1; j < i; j++){
                    ptr2 = ptr2 -> next;
                }
                int temp = ptr1 -> data;
                ptr1 -> data = ptr2 ->data;
                ptr2 -> data = temp;
            }
            for(int i = 1; i <= K; i++)
            ptr1 = ptr1 -> next;
        }
    }
    
    void makeCylcle(int pos){
        Node *temp = head;
        Node *starthead = NULL;
        int count = 1;
        while(temp -> next != NULL){
            if(count == pos)
            starthead = temp;
            temp = temp -> next;
            count++;
        }
        temp -> next = starthead;
    }
    
    bool detectCylcle(){
        Node *ptr = head;
        unordered_map <string, int> mp;
        while(ptr -> next != NULL){
            ostringstream address;
            address << ptr;
            mp[address.str()]++;
            ptr = ptr -> next;
            for(auto it = mp.begin(); it != mp.end(); it++){
                if(it -> second >= 2)
                return true;
            }
        }
        return false;
    }
};

int main(){
    Linkedlist list1;
    list1.insertAtEnd(1);
    list1.insertAtEnd(2);
    list1.insertAtEnd(3);
    list1.insertAtEnd(4);
    list1.insertAtEnd(5);
    list1.insertAtEnd(6);
    list1.insertAtEnd(7);
    list1.insertAtEnd(8);
    list1.displayLinkedlist();
    if(list1.search(5))
    cout << "Found" << endl;
    else
    cout << "Not Found\n";
    if(list1.search(50))
    cout << "Found" << endl;
    else
    cout << "Not Found\n";
    list1.insertAtFront(6);
    list1.displayLinkedlist();
    cout << "No.Of Nodes: " << list1.lengthOfLinkedList() << endl;
    list1.deleteNode(6);
    list1.displayLinkedlist();
    cout << "No.Of Nodes: " << list1.lengthOfLinkedList() << endl;
    cout << endl << endl;
    // list1.reverseALinkedlist();
    // list1.reverseKNodes();
    // list1.displayLinkedlist();
    list1.makeCylcle(3);
    // list1.displayLinkedlist();
    cout << list1.detectCylcle() << endl;
    list1.deleteCylcle();
    list1.displayLinkedlist();
    
    // Linkedlist list2;
    // list2.insertAtEnd(6);
    // list2.insertAtEnd(7);
    // list2.insertAtEnd(8);
    // list2.insertAtEnd(9);
    // list2.insertAtEnd(10);
    // list2.displayLinkedlist();
    // list1.mergeLinkedlist(list2);
    // list1.displayLinkedlist();
    return 0;
}


// <<<<<<<<<<< DOUBLY LINKED LIST >>>>>>>>>>>>>> //

// 1.Program to illustrate doubly linked list.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
};

class Linkedlist{
    public:
    Node *head = NULL;
    
    void insertAtEnd(int val){
        Node *newNode = new Node;
        if(head == NULL){
            head = newNode;
            newNode -> prev = NULL;
        }
        else{
            Node *ptr = head;
            while(ptr -> next != NULL)
            ptr = ptr -> next;
            ptr -> next = newNode;
            newNode -> prev = ptr;
        }
        newNode -> data = val;
        newNode -> next = NULL;
    }
    
    void displayLinkedlist(){
        Node *ptr = head;
        cout << "head: " << head << endl;
        while(ptr != NULL){
            cout << "[" << ptr -> prev << "|" << ptr -> data << "|";
            if(ptr -> next != NULL)
            cout << ptr -> next << "]" << "<=>"; 
            else
            cout << ptr -> next << "]" << "\n"; 
            ptr = ptr -> next;
        }
        
    }
    
    bool search(int val) {
        Node *ptr = head;
        while (ptr != NULL) {
            if (ptr->data == val)
            return true;
            ptr = ptr->next;
        }
        return false;
    }
    
    void insertAtFront(int val){
        Node *newNode = new Node;
        newNode -> data = val;
        newNode -> next = head;
        newNode -> prev = NULL;
        head -> prev = newNode;
        head = newNode;
    }
    
    void deleteNode(int val){
        Node *ptr = head;
        while(ptr -> data != val)
        ptr = ptr -> next;
        if(ptr -> prev == NULL){
            ptr -> next -> prev = NULL;
            head = head -> next;
        }
        else if(ptr -> next == NULL)
        ptr -> prev -> next = ptr -> next;
        else{
            ptr -> prev -> next = ptr -> next;
            ptr -> next -> prev = ptr -> prev;
        }
        delete ptr;
    }
    
    int lengthOfLinkedList(){
        Node *ptr = head; 
        int count = 0;
        while(ptr != NULL){
            ptr = ptr -> next;
            count++;
        }
        return count;
    }
};

int main(){
    Linkedlist list1;
    list1.insertAtEnd(1);
    list1.insertAtEnd(2);
    list1.insertAtEnd(3);
    list1.insertAtEnd(4);
    list1.insertAtEnd(5);
    list1.insertAtEnd(6);
    list1.insertAtEnd(7);
    list1.insertAtEnd(8);
    list1.displayLinkedlist();
    if(list1.search(5))
    cout << "Found" << endl;
    else
    cout << "Not Found\n";
    if(list1.search(50))
    cout << "Found" << endl;
    else
    cout << "Not Found\n";
    list1.insertAtFront(6);
    list1.displayLinkedlist();
    cout << "No.Of Nodes: " << list1.lengthOfLinkedList() << endl;
    list1.deleteNode(2);
    list1.displayLinkedlist();
    cout << "No.Of Nodes: " << list1.lengthOfLinkedList() << endl;
    cout << endl << endl;
    return 0;
}
