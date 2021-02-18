//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

//There is only one repeated number in nums, return this repeated number.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int vectorLength = nums.size();
        for (int i = 0; i < vectorLength; i++)
        {
            int valueToTest = nums[i];
            for (int j = i + 1; j < vectorLength; j++)
            {
                    if (valueToTest == nums[j])
                    {
                        return valueToTest;
                    }
            }
        }
        return -1;
    }
};
