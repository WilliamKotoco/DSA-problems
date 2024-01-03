class Solution {
public:
    string makeSmallestPalindrome(string s) {
    int end_ptr = s.size() - 1;
    int start_ptr = 0;

    while(start_ptr < end_ptr)
    {
        if (s[end_ptr] > s[start_ptr])
        {
            s[end_ptr] = s[start_ptr];
        }

        else if (s[end_ptr] <  s[start_ptr])
        {
            s[start_ptr] = s[end_ptr];
        }

        start_ptr++;
        end_ptr--;

    }
    return s;
        
    }
};
