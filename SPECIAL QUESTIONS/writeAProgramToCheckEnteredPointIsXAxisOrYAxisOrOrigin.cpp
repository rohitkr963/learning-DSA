#include<iostream>
using namespace std; 

int main ()
{
    int x,y;
    cout<<"enter the point of x =";
    cin>>x;
    cout<<"enter the point of y =";
    cin>>y;

    if(x==0 && y==0)
    {
        cout<<"point is on origin";
    }
    else if(x==0)
    {
        cout<<"point is on x-axis";
    }
    else if (y==0)
    {
        cout<<"point is on y-axis";
    }
    else
    {
        cout<<"point is nither x-axis nor y-axis";
    }

    return 0;
    

}