#include <iostream>
using namespace std;

int main() {
    int marks[5] = {50, 20, 70, 40, 30}; //example marks array
    for(int i=0; i<5; i++)
    {
        if(marks[i]<35)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}