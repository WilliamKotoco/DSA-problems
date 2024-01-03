class Solution {
public:
    int maximum69Number (int num) {
        using namespace std;

        std::string str = std::to_string(num);
        int i = 0;
        int pos = str.find('6');

     if (pos != std::string::npos) {
            str.replace(pos, 1, "9");
        }

        return std::stoi(str);


     return 0 ;
        
    }
};
