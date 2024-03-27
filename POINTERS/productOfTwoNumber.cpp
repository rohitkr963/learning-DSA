#include <iostream>
using namespace std;

int main() {
    int num1, num2, *p1, *p2, product;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    p1 = &num1; //pointer to num1
    p2 = &num2; //pointer to num2

    product = (*p1) * (*p2); //product of the two numbers
    cout << "Product = " << product << endl;
    return 0;
}