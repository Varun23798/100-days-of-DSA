#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;  
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    int k;
    cin >> k;  
    int comparisons = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            index = i;
            break;
        }
    }
    if (index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not Found" << endl;
    cout << "Comparisons = " << comparisons << endl;
    return 0;
}