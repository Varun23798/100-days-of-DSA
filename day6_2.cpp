#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int insertPos = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }
    while (insertPos < nums.size()) {
        nums[insertPos] = 0;
        insertPos++;
    }
}
int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}