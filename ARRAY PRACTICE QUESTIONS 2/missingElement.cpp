#include <iostream>
using namespace std;

int main() {
   int arr[7]={1,2,3,4,6,7,9};
   int missing=1;

   for(int i=0; i<7; i++)
   {
    if(arr[i]==missing)
    {
        missing++;
    }
   }
cout<<"smallest missing positive number = "<<missing;
}