#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    number = abs(number);

    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        number /= 10;
    }

    cout << "Sum of even digits: " << sum << std::endl;

    return 0;
}
