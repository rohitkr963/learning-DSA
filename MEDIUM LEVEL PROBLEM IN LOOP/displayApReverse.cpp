#include<iostream>
using namespace std;
int main(){
    int i,n;
    
     cout<<"enter the value of n = ";
    cin>>n;

    for(i=100; i>=n; i--){
        cout<<i;
        cout<<", ";
       i = i-2;

    }
    
}