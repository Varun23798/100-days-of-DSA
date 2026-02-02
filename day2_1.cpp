#include <iostream>
using namespace std;
int main() {
    int n, pos;
    cin >> n;
    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> pos; 
    if (pos < 1 || pos > n) {
        cout << "Invalid position" << endl;
        return 0;
    }
    // Shift elements left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Print updated array
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}