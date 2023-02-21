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
};

int main(){
    Linkedlist list1;
    list1.insertAtEnd(1);
    list1.insertAtEnd(2);
    list1.insertAtEnd(3);
    list1.insertAtEnd(4);
    list1.insertAtEnd(5);
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
    
    Linkedlist list2;
    list2.insertAtEnd(6);
    list2.insertAtEnd(7);
    list2.insertAtEnd(8);
    list2.insertAtEnd(9);
    list2.insertAtEnd(10);
    list2.displayLinkedlist();
    list1.mergeLinkedlist(list2);
    list1.displayLinkedlist();
    return 0;
}
