#include<iostream>
using namespace std;

int bintodec(int binnum){
    int ans = 0 , pow = 1 , rem;

    while(binnum > 0){
        rem = binnum % 10;
        ans += (rem * pow);
        binnum = binnum / 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    cout<<bintodec(101)<<endl;
    cout<<bintodec(1011)<<endl;
    cout<<bintodec(101101)<<endl;
    return 0;
}