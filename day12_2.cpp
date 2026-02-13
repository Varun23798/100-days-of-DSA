#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int A[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    bool toeplitz = true;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[i][j] != A[i+1][j+1]) {
                toeplitz = false;
                break;
            }
        }
        if (!toeplitz) break;
    }
    if (toeplitz) cout << "true";
    else cout << "false";
    return 0;
}