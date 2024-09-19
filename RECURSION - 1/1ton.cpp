#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return;
    
    fun(n-1);
    cout<<n<<endl;
}

int main(){
    int p;
    cout<<"enter a number";
    cin>>p;
    fun(p);
}