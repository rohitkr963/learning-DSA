#include <iostream>
using namespace std;
int main() {
    int i,n,fact=1;
    cout<<"enter a number";
    cin>>n;

    for(i=1; i<=n; i++)
    {

    fact=fact*i;
    }
    cout<<fact;

    return 0;
}
