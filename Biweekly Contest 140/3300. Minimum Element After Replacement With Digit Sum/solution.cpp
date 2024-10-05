class Solution {
public:
    int minElement(vector<int>& nums) {
        int minVal = 1e4+1;
        for(auto &x : nums){
            int currSum = 0;

            while(x){
                currSum += x%10;
                x/=10;
            }
            minVal = min(minVal,currSum);
        }
        return minVal;
    }
};