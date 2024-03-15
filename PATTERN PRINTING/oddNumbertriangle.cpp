#include <iostream>
using namespace std;
int main() {
   
   int n,i,j;
   cout<<"enter a number";
   cin>>n;

   for(i=1; i<=10; i++)
   {
    for(j=1; j<=i; j++)
    {
        if(j%2!=0&&i%2!=0){
    cout<<j;
        }
   }
   cout<<endl;
   }
    return 0;
}
