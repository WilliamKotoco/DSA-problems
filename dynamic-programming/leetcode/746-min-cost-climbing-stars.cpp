class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int d=cost.size();
        
        d=d+1;
        int arr[d+2];
        arr[2]=0;
        arr[1]=0;

        for(int i=3;i<=d;i++)
        {
            arr[i]=min((cost[i-3]+arr[i-2]),(cost[i-2]+arr[i-1]));
        }

        return arr[d];
    }
};
