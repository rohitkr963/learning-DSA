#include<iostream>
using namespace std;

 int abhi(int g){
    return g;
}
int main(){
    int i,a,b;
    cout<<"enter the value of a =";
    cin>>a;

    cout<<"enter the value of b =";
    cin>>b;
if(a<b){
    for(i=a; i<=b; i++)
    if(i%2!=0){
       abhi(i);
        cout<<"print the all odd number = "<<i<<endl;
    }
}
else if(a>b){
    for(i=a; i>=b; i--)
    if(i%2!=0){
        abhi(i);
        cout<<"print the all odd number = "<<i<<endl;
    }
}
else{
    cout<<"don't enter any comand = ";
}
}