class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {

        int n = maximumHeight.size();
        sort(begin(maximumHeight),end(maximumHeight));
        int nxt = maximumHeight[n-1];
        long long ans = maximumHeight[n-1];

        for(int i=n-2;i>=0;i--){
             if(maximumHeight[i] < nxt){
                ans += maximumHeight[i];
                nxt = maximumHeight[i];
              }else{
                ans+= nxt-1;
                nxt--;
               }

               if(nxt==0)
                  return -1;
        }

        return ans;
    }
};