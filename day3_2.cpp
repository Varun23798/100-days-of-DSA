#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;  
    int arr[n-1];
    long sumArr = 0;

    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sumArr += arr[i];
    }
    int totalSum = n * (n + 1) / 2; 
    int missing = totalSum - sumArr;
    cout << "Missing element = " << missing << endl;
    return 0;
}