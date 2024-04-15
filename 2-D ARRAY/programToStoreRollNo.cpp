#include <iostream>
using namespace std;

main() {
    int matrix[4][2];    

    int i, j;

    for (i = 0; i < 4; i++) {
        cout << "\n Enter Roll of Student [" << i + 1 << "]";
        cin >> matrix[i][0];
        cout << "\n Enter Mark of Student [" << i + 1 << "]";
        cin >> matrix[i][1];
    }
    
    for (i = 0; i < 4; i++) {
        cout << "\n Roll No :  " << matrix[i][0] << "   Marks : " << matrix[i][1];
    }

}