#include<iostream>
using namespace std;

int fact(int n){

    // base case .......... means where we have to use terminating condition
    if(n == 1 || n==0) return 1;
    return n*fact(n-1);
}

int main(){
    cout<<fact(5);
}