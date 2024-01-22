class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> perm;
        /// the greedy choice is to use the smaller values first for I
        /// and the greater values first for D
        /// all in range 0 to n

        int next_smaller_value = 0;
        int next_greater_value = s.size();

        for (int i = 0; i <= s.size(); i++){
            if (s[i] == 'I')
            {
                perm.push_back(next_smaller_value);
                next_smaller_value++;
            }
            else
            {
                perm.push_back(next_greater_value);
                next_greater_value--;
            }
        

        }

        return perm;
        
    }
};
