
#include <iostream>

using namespace std;

const int MAX = 10;

int main() {
    int n;

    cout << "Enter the number of rows/columns of the square matrix: ";
    cin >> n;

    int mat[MAX][MAX];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int temp[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[j][n - 1 - i] = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = temp[i][j];
        }
    }

    cout << "Matrix after rotating by 90 degrees clockwise:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl; 
    }

    
}
