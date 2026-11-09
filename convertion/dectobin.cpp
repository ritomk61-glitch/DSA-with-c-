#include<iostream>
using namespace std;

int dectobin(int decnum){
    int ans = 0 , rem;
    int pow = 1;

    while(decnum > 0){
        rem = decnum % 2;
        decnum = decnum / 2;
        
        ans += (rem * pow);
        pow = (pow * 10);
    }
    return ans;
}

int main(){
    for(int i = 0 ; i <= 10 ; i++){
        cout<<dectobin(i)<<endl;
    }
    return 0;
}