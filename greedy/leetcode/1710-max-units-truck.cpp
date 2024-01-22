class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {


        std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
  return a[1] > b[1];
});
        int units = 0;
        int i = 0;

        for (int i = 0; i < boxTypes.size(); i++)
        {
            if(truckSize >= boxTypes[i][0])
            {
                truckSize -= boxTypes[i][0];
                units += boxTypes[i][1] *  boxTypes[i][0];
            }
            else
            {
                
                units += truckSize *  boxTypes[i][1];
                return units;

            }
        }
    return units;
    }
};
