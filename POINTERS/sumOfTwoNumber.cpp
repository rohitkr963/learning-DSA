#include<iostream>
using namespace std;

int main()
{
    int a,b,*p1,*p2,sum;

    cout<<"enter two number for it's sum : "<<endl;
    cin>>a>>b;

    p1=&a;
    p2=&b;

    sum=*p1 + *p2;

    cout<<"the sum is :"<<sum<<endl;
}