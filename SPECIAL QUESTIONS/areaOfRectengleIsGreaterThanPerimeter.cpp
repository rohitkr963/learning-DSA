#include<iostream>
using namespace std;
int main(){
    int len,wed,area,perimeter;
    cout<<"enter the value of len and wed = ";
    cin>>len>>wed;

    area = len*wed;
    cout<<"area of rectangle is = "<<area<<endl;

    perimeter = 2*(len+wed);
    cout<<"perimeter of rectangle is = "<<perimeter<<endl;

    if(area > perimeter){
        cout<<"area of rectangle is greater than perimeter of rectangle";
    }
    else{
        cout<<"perimeter of rectangle is greater than area of rectangle";
    }
    
}