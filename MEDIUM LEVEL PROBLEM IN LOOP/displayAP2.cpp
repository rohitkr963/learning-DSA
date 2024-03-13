#include<iostream>
using namespace std; 

int main()
{
    int i,a=4,d=3,n,AP;
    
    cout<<"enter a number";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        AP=a+(i-1)*d;

        cout<<AP<<",";

    }
  
    return 0;
    
}