#include <iostream>
using namespace std;

int main() {
    int n,i;
    int arr[5]={5,8,3,9,6};
    int sort=arr[0];
    int count=0;
   

    for(i=0; i<5; i++)
    {
        if(arr[i]<sort)
        {
            sort=arr[i];
            count++;
        }
        cout<<sort;
    }
    //cout<<count;
    
}