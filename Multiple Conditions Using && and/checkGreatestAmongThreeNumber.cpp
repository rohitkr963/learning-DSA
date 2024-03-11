#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"first is greatest number among three";
    }
    else if(b>a && b>c)
    {
        cout<<"second is greatest number among three";
    }
    else
    {
        cout<<"third is greatest number among three";
    }
    return 0;
    
}