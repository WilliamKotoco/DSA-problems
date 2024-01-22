#define MIDDLE  14
#define LENGTH  25
#define TIME_TO_TYPE  1
class Solution {
public:
    int minTimeToType(string word) {
       int time = 0;

       int start = (int)'a';
       for (int i = 0; i < word.size(); i++)
       {
           int curr = (int)word[i];

           time += min(abs(start-curr), 26 - abs(start-curr));

           start = curr;
       }

    /// you type every letter in the word
       int types = word.size();

       return time + types;
    }
};

