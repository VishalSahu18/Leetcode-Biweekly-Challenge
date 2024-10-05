class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        
       // Greedy Approach
       int m = word1.size(), n = word2.size();
       bool flag = false;
       vector<int>nums(n,-1);

       for(int i=m-1,j=n-1;i>=0;i--){
            if(j>=0 && word1[i] == word2[j])
                nums[j--] = i;
       }

       vector<int>ans;

       for(int i=0,j=0; i<m && j<n ; i++){
            if(word1[i]==word2[j]){
                ans.push_back(i);
                j++;
            }else if(!flag && (j==n-1 || i < nums[j+1])){
                ans.push_back(i);
                flag = true;
                j++;
            }
       }

       return ans.size()==n ? ans : vector<int>{};
    }
};