#include <iostream>
using namespace std;
int main() {
   
   int n,i,j;
   cout<<"enter a number";
   cin>>n;

   for(i=1; i<=n; i++)
   {
    for(j=1; j<=i; j++)
    {
        
    cout<<2*j-1;
        
   }
   cout<<endl;
   }
    return 0;
}
