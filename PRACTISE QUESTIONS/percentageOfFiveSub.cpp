#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5,sum,pre;
    cout<<"enter the five subject marks m1 m2 m3 m4 and m5";
    cin>>m1>>m2>>m3>>m4>>m5;

    sum = m1+m2+m3+m4+m5;
    pre= sum/5;

    cout<<"precentage of five subject marks = "<<pre<<"%"<<endl;
}
    