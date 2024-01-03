#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
class Solution {
public:
    int minimumSum(int num) {
        /// The greedy choice to be made is choosing to combine the smallest remainescent
        /// number as the decimal and the greatest remainescent number as the unit

        /// we can take advantage that the number has always 4 digits
        int tmp = num;
        std::vector<int> nums; 
        while(tmp > 0)
        {
            nums.push_back(tmp % 10);
            tmp  /= 10;
        }
        std::sort(nums.begin(), nums.end());

        std::string num1;
        std::string num2;
        num1.append(std::to_string(nums[0]));
        num1.append(std::to_string(nums[3]));
        num2.append(std::to_string(nums[1]));
        num2.append(std::to_string(nums[2]));


      return std::stoi(num1) + std::stoi(num2);
        
    }
};


