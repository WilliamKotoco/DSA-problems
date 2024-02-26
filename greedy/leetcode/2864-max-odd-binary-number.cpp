class Solution {
public:

    static  bool compare(char a, char b) {
    return a > b;
}

    string maximumOddBinaryNumber(string s) {

        if (s.size() == 1)
            return "1";
        std::sort(s.begin(), s.end(), &compare);

        int i = 0;

        while(s[i] != '0' && i < s.size())
            i++;

        if (i < s.size())
        {
            char tmp;
            tmp = s[i-1];
            s[i-1] = s[s.size() - 1];
            s[s.size() - 1] = tmp;  
        }
        

        return s;
    }


};
