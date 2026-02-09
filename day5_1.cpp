#include <iostream>
#include <vector>
using namespace std;

int main() {
    int p, q;
    cin >> p;
    vector<int> log1(p);
    for (int i = 0; i < p; i++) {
        cin >> log1[i];
    }
    cin >> q;
    vector<int> log2(q);
    for (int i = 0; i < q; i++) {
        cin >> log2[i];
    }
    vector<int> merged;
    int i = 0, j = 0;
    // Merge two sorted logs
    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            merged.push_back(log1[i]);
            i++;
        } else {
            merged.push_back(log2[j]);
            j++;
        }
    }
    // Append remaining elements
    while (i < p) {
        merged.push_back(log1[i]);
        i++;
    }
    while (j < q) {
        merged.push_back(log2[j]);
        j++;
    }
    for (int k = 0; k < merged.size(); k++) {
        cout << merged[k] << " ";
    }
    cout << endl;
    return 0;
}