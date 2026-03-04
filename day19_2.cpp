#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int totalSum = 0;
    int maxSum = nums[0], currMax = 0;
    int minSum = nums[0], currMin = 0;

    for (int num : nums) {
        totalSum += num;

        currMax = max(num, currMax + num);
        maxSum = max(maxSum, currMax);

        currMin = min(num, currMin + num);
        minSum = min(minSum, currMin);
    }

    if (maxSum < 0)
        return maxSum;

    return max(maxSum, totalSum - minSum);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << maxSubarraySumCircular(nums);

    return 0;
}