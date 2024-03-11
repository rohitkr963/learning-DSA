#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of three side of tringle = ";
    cin>>a>>b>>c;

    if(a == b && b == c){
        cout<<"this tringle is equilateral tringle";
    }

    else if(a == b || b == c || c == a){
        cout<<"this tringle is isoscalenes tringle";
    }
    else{
        cout<<"this tringle is scalene tringle";
    }
    return 0;
}