#include <iostream>
using namespace std;
int main() {
   
   int n,i,j;
   cout<<"enter a number";
   cin>>n;
   int mid=n/2+1;

   for(i=1; i<=n; i++)
   {
    for(j=1; j<=n; j++)
    {
        if(j==mid)
        {
            cout<<"*";
        }
        else 
        {
            cout<<" ";
        }
   }
   cout<<endl;
   }
    return 0;
}
