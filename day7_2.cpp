#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int prev1 = 0, prev2 = 1; 
    int curr;
    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}
int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}