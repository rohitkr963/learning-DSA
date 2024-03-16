#include <iostream>
using namespace std;
int main() {
   
   int n,i,j;
   cout<<"enter a number";
   cin>>n;

   for(i=0; i<=4; i++)
   {
    for(j=1; j<=4-i; j++)
    {
        cout<<j;
   }
   cout<<endl;
   }
    return 0;
}
