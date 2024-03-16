#include <iostream>
using namespace std;
int main() {
   
   int n,i,j;
   cout<<"enter a number";
   cin>>n;

   for(i=1; i<=4; i++)
   {
    for(j=1; j<=i; j++)
    {
        cout<<"*";
   }
   cout<<endl;
   }
    for(i=1; i<=3; i++)
   {
    for(j=i; j<=3; j++)
    {
        cout<<"*";
   }
   cout<<endl;
   }
    return 0;
}
