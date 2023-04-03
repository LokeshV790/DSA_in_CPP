#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class linkedList{
    public:
        Node *head;
        Node *tail;
    linkedList(){
     head=NULL;
     tail=NULL;
    };
        // linkedList(int value) {
        //     Node *newNode = new Node;
        //     newNode -> data = value;
        //     newNode -> next = NULL;
        //     head = newNode;
        //     tail = newNode;
        // }
};

void insertNodeAtFront(linkedList &lst, int value) {
    Node *newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;
    if(lst.head = NULL){
        lst.head = newNode;
        lst.tail = newNode;
    }
    else {
        newNode -> next = lst.head;
        lst.head = newNode;
    
    }
};

void insertNodeAtEnd(linkedList &lst, int value){
    Node *newNode = new Node;
    newNode -> data = value;
    newNode->next = NULL;
    if(lst.head==NULL){
        lst.head=newNode;
        lst.tail=newNode;
    } else {
        lst.tail -> next = newNode;
        lst.tail = lst.tail -> next;
        return;
    }


}

int main(){
    linkedList lst;
    insertNodeAtFront(lst, 40);
    insertNodeAtFront(lst, 30);
    insertNodeAtFront(lst, 50);
    insertNodeAtFront(lst, 60);
    insertNodeAtFront(lst, 20);
    return 0;
    
}