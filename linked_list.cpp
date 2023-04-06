#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class linkedList{
    public:
        Node *head, *tail;
        linkedList(){
            head = NULL;
            tail = NULL;
        }

        void insertNodeAtFront(int value){
            Node *newNode = new Node;
            newNode -> data = value;
            newNode -> next = NULL;
            if(head==NULL){
                head = newNode;
                tail = newNode;
            } else {
                newNode -> next = head;
                head = newNode;

            }
        }

        void insertNodeAtEnd(int value){
            Node *newNode = new Node;
            newNode -> data = value;
            newNode -> next = NULL;
            if(head==NULL){
                head = newNode;
                tail = newNode;
            } else {
                tail -> next = newNode;
                tail = tail -> next;
            }
        }

        void insertAtPosition(int pos, int value){
            Node *prev = new Node;
            Node *current = new Node;
            Node *newNode = new Node;
            newNode -> data = value;
            newNode -> next = NULL;
            if(pos<1){
                cout<<"\nPosition cant be less than 1.";
            } else if (pos == 1) {
                newNode -> next = head;
                head = newNode;
            } else {
                for(int i = 1; i<=pos; i++){
                    prev = current;
                    current = current->next;
                    if(current==NULL){
                        cout<<"\nInvalid Position";
                    }
                    prev->next = newNode;
                    newNode -> next = current;
                }

            }
        }
};

int main(){
    linkedList lst;
    lst.insertNodeAtFront(20);
    lst.insertNodeAtFront(40);
}