#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    int i,n,GP,x,power;
    int a=3,r=4;  //ar(n-1)
    
    cout<<"enter a number";
    cin>>n;

    x=(n-1);

    power=pow(x,r);

    GP=a*power;

    for(i=a; i<=GP; i=i*r)
    {
        cout<<i<<" ";
    }

   
    return 0;
    
}