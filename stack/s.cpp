#include<iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;
int value , n;


void push(){
    for(int i = 0 ; i < MAX ; i++){
        cout<<"Enter value:";
        cin>>value;
        if(top == MAX - 1){
            cout<<"stack overflow";
        }
        else{
            top++;
            stack[top] = value;
            
        }
    }
  }

  void pop(){
   
    if( top == -1){
        cout<<"stack underflow";
    }
    else{
        cout<<stack[top]<<"is deleted from your stack"<<endl;
        top--;
    }

  }


void display(){

    for(int i = top ; i >= 0 ; i--){
        cout<<stack[i]<<" "<<endl;
    }

}

int main(){
    push();
    display();
    pop();
    display();
    return 0 ; 
}



