#include<iostream>
using namespace std;

void recursion(int num){

    if(num == 1){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    recursion(num-1);
}
// ?factorial
int fact(int n ){
    if( n == 0){
        return 1;
    }
    return n * fact(n-1);
}

// ! sum of n number

int sum(int n ){
    if( n == 1){
        return 1;
    }
    return n + sum(n-1);
}

int main(){
    recursion(3);
    cout<<fact(5)<<endl;
    cout<<sum(5);
    return 0;
}