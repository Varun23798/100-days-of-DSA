#include <iostream>
#include <vector>
using namespace std;
void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
int main() {
    string input;
    cin >> input; 
    vector<char> s(input.begin(), input.end());
    reverseString(s);
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    return 0;
}

 