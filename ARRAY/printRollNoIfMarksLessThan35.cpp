#include <iostream>
using namespace std;

int main() {
    int marks[5] = {50, 20, 70, 40, 30}; //example marks array
    int n = sizeof(marks)/sizeof(marks[0]); //finding the size of array

    for (int i = 0; i < n; i++) { //loop through all elements
        if (marks[i] < 35) { //check if marks is less than 35
            cout << "Student with roll number " << i << " has marks below 35." << endl;
        }
    }
    return 0;
}