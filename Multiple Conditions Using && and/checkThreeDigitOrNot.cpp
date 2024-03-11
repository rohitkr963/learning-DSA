#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;

    if(a>=0 && a<=99)
    {
        cout<<"this is the single digit number";
    }
    else if(a>=100 && a<=999)
    {
        cout<<"this is three digit number";
    }
    return 0;
}