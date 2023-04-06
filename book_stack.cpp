// Book Stack
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char box[5][10];
    char bkno[10];

    int ch=0,top=-1,i=0;
    do{
        cout << "\n1. Insert Book";
        cout << "\n2. Delete Book";
        cout << "\n3. Display Stack";
        cout << "\n4. Exit";

        cout << "\nEnter Choice : ";
        cin >> ch;

        switch(ch){
            case 1:
                if(top >= 4){
                    cout<<"\nBook shelf is Full";
                } else {
                    cout << "\nEnter Book No: ";
                    cin>> bkno;
                    top++;
                    strcpy(box[top],bkno);
                }
                break;
            
            case 2:
                if(top==-1){
                    cout<<"\nBook Stack is empty.";
                } else {
                    cout << "\nBook deleted : " << box[top];
                    top--;
                }
                break;
            
            case 3:
                if(top==-1){
                    cout<<"\nshelf is empty";
                } else {
                    cout << "\nthe books in shelf are : ";
                    for(i=top; i >= 0 ; i--){
                        cout << box[i]<<" ";
                    }
                }
                break;

            case 4:
                return 0;
            
            default :
                cout<<"Invalid input";
        }
    }while(true);

    return 0;
};
