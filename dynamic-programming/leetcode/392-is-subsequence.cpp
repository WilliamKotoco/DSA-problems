class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0)
            return true;
        int top = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == s[top])
                top++;
            if (top == s.size())
                return true;
        }

        return false;
    }
};
