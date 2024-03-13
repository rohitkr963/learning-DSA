#include<iostream>
using namespace std; 

int main()
{
    int i,a=1,r=2,n,GP;  //ar(n-1)
    
    cout<<"enter a number";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a=a*r;

    }
  
    return 0;
    
}