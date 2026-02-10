#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq;
    vector<int> result;
    for (int n : nums1) {
        freq[n]++;
    }
    for (int n : nums2) {
        if (freq[n] > 0) {
            result.push_back(n);
            freq[n]--;  
        }
    }
    return result;
}
int main() {
    int n1, n2;
    cin >> n1;
    vector<int> nums1(n1);
    for (int i = 0; i < n1; i++) cin >> nums1[i];
    cin >> n2;
    vector<int> nums2(n2);
    for (int i = 0; i < n2; i++) cin >> nums2[i];
    vector<int> ans = intersect(nums1, nums2);
    for (int x : ans) cout << x << " ";
    return 0;
}