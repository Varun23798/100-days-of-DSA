#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int matrix[n][n];
    bool isIdentity = true;
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                if(matrix[i][j] != 1) {
                    isIdentity = false;
                }
            } else {
                if(matrix[i][j] != 0) {
                    isIdentity = false;
                }
            }
        }
    }

    if(isIdentity)
        cout << "Identity Matrix";
    else
        cout << "Not an Identity Matrix";

    return 0;
}