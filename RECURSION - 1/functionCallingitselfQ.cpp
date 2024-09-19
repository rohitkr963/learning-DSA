#include<iostream>
using namespace std;

void fun(int n){
    if(n==0)  return;
    cout<<"hii"<<endl;
    fun(n-1);
}

int main()
{
    int x;
    cout<<"enter your number";
    cin>>x;
    
    fun(x);
}