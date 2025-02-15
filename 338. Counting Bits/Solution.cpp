class Solution {
public:
    vector<int> countBits(int n)
    {
        vector<int> ans;
      for(int i = 0 ; i <= n ; i++)
      {        int count = 0 ;
        int helper = 1 ;

        for(int j = 1 ; j <= 32 ; j++)
        {
            if((i & helper) != 0)
            {
                count++;
            }
            helper = helper << 1; 

        } 
        ans.push_back(count);
      } 
      return ans; 
    }
};