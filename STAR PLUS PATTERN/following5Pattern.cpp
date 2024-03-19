#include <iostream>
using namespace std;
int main() {
   
   char n,i,j;
   cout<<"enter a number";
   cin>>n;

   for(i='A'; i<='D'; i++)
   {
    for(j='A'; j<=i; j++)
    {
        cout<<j;
   }
   cout<<endl;
   }
    return 0;
}
