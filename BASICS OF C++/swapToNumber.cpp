#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a and b";
    cin>>a>>b;

    c=a;
    a=b;
    b=c;
    cout<<"print the value of  a = "<<a<<endl;
    cout<<"print the value of b = "<<b<<endl;

    return 0;
}