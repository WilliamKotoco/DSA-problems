class Solution {
public:
    int minOperations(vector<int>& nums) {
        int size = nums.size();
        int count = 0;

        if (size == 1)
            return 0;
        for (int i = 1; i < size; i++)
        {
            
            if (nums[i] <= nums[i-1])
            {
                int difference_to_greater = (nums[i-1] - nums[i]) + 1;
                count += difference_to_greater;
                nums[i] += difference_to_greater;
            }
        }
        
        return count;
    }
};
