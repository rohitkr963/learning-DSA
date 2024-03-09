#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the years";
    cin>>year;

    if(year<18){
        cout<<"this boys is children";

    }
    else if(year>=18 && year<=30){
        cout<<"this person is adult";
    }
    else {
        cout<<"this person is old";
    }
    return 0;
}