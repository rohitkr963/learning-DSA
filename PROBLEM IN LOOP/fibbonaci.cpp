#include <iostream>
using namespace std;
int main() {
    int i,n;
    int a=0;
    int b=1;
    int feb=0;
    cout<<"enter a number";
    cin>>n;
     
     for(i=0; i<=n; i++)
     {
        cout<<feb;
        feb=a+b;
        b=a;
        a=feb;
     }
    
    return 0;
}
