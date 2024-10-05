class Solution {
private:

     vector<int> calculateZ(string input){
     int n = input.size();
     vector<int>Z(n);
     int left = 0 , right = 0;
     
     for(int k=1;k<n;k++){
           if(k > right) {
                left = right = k;
                while(right < n && input[right] == input[right - left]) {
                    right++;
                }
                Z[k] = right - left;
                right--;
            } else {
                //we are operating inside box
                int k1 = k - left;
                //if value does not stretches till right bound then just copy it.
                if(Z[k1] < right - k + 1) {
                    Z[k] = Z[k1];
                } else { //otherwise try to see if there are more matches.
                    left = k;
                    while(right < n && input[right] == input[right - left]) {
                        right++;
                    }
                    Z[k] = right - left;
                    right--;
                }
            }
        }
      return Z;
  }

public:
    int minStartingIndex(string s, string pattern) {

        int n = s.size() , m = pattern.size();
        string revS = s , revP = pattern;
        reverse(revS.begin(),revS.end());
        reverse(revP.begin(),revP.end());

        vector<int>z1 = calculateZ(pattern + s);
        vector<int>z2 = calculateZ(revP + revS);

        for(int i=0; i<=n-m;i++){
            if(z1[m+i] + 1 + z2[n-i] >= m)
                return i;
        }
        return -1;
    }
};