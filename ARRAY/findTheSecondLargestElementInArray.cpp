#include <iostream>
using namespace std;

int main() {
    int n,i;
    int arr[5]={5,8,9,18,6};
    int max=arr[0];
   

    for(i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<max;
}