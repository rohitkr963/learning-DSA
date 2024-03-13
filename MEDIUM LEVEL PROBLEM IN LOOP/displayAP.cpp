#include<iostream>
using namespace std; 

int main()
{
    int i,a=1,d=2,n,AP;
    
    cout<<"enter a number";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        AP=a+(i-1)*d;

        cout<<AP<<endl;

    }
  
    return 0;
    
}