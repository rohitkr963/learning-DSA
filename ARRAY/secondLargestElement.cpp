#include <iostream>
using namespace std;

int main() {
   int arr[5]={3,5,7,11,3};
   int largest=arr[0];
   int secondlargest=largest;

   for(int i=0; i<5; i++)
   {
    if(arr[i]>largest)
    {
        secondlargest=largest;
        largest=arr[i];
    }
    else if(secondlargest<arr[i]&&arr[i]<largest)
    {
        secondlargest=arr[i];
    }
   }
cout<<secondlargest;
}