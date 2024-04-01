#include <iostream>
using namespace std;

int main() {
    int n,i;
    int arr[5]={5,2,3,4,2};
    int multiply=1;

    for(i=0; i<5; i++)
    {
        multiply=multiply*arr[i];
    }

    cout<<multiply;
}