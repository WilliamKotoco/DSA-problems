class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if (n == 0)
            return 0;
        if (n <= 2)
            return 1;
        int max_element = 0;
        int nums[n+1];
        nums[0] = 0;
        nums[1] = 1;
        nums[2] = 1;


        for (int i = 3; i <= n; i++)
        {
            if (i % 2 == 0)
                nums[i] = nums[i/2];
            else
                nums[i] = nums[i/2] + nums[(i/2) + 1];
            max_element = max(max_element, nums[i]);

        }

        return max_element;
        
    }
};
