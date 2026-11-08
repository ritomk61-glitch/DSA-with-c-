#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* top = NULL;

void push(){
    int value , n;
    cout<<"enter how many number you wanna insert in your stack:"<<endl;
    cin>>n;

    cout<<"enter your value:"<<endl;

    for(int i = 0 ; i < n ; i++){
        cin>>value;
        
        Node* newnode = new Node();
        
        newnode -> data = value;
        newnode -> next = top;
        
        top = newnode;
    }
}

void pop(){
    if(top == NULL){
        cout<<"your stack is empty"<<endl;
    }

    else{
        Node* temp = top;
        cout<<temp -> data<<" is deleted from the stack"<<endl;
        top = temp -> next;

        delete temp;
    }
}

void display(){
    Node* temp = top;

    if(top == NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack elements:";

        while(temp != NULL){
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};
int main(){
    push();
    display();
    cout<<"after deletation:"<<endl;
    pop();
    display();
}
