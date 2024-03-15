#include <iostream>
using namespace std;
int main() {
    int number,digit;
    cout << "Enter a number: ";
    cin >> number;

    //number = abs(number);

    //int sum = 0;
    while (number > 0) {
         digit = number % 10;
            //sum += digit;
        number /= 10;
    }

    cout << "Sum of  digits: " << digit << std::endl;

    return 0;
}
