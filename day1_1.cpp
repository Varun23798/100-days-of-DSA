#include <iostream>
using namespace std;
int main() {
    int size;
    cin >> size;
    int *a = new int[size+1];
    for(int i=0;i<size;i++)
        cin >> a[i];
    int position, num;
    cin >> position >> num;
    for(int i=size;i>=position;i--)
        a[i] = a[i-1];
    a[position-1] = num;
    for(int i=0;i<=size;i++)
        cout << a[i] << " ";
    }