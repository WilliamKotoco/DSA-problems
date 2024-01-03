class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       /// it is easy to see that the greedy option is always get the greater number.
        auto max_position = std::max_element(nums.begin(), nums.end());
        int max = *max_position;

     return  k*max + (k-1)*k/2; ;   
    }
};
