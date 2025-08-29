class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i = 0 ; i < jewels.size(); i++)
        {
            for(int k =0 ;  k < stones.size(); k++)
            {
                if(jewels[i]==stones[k])
                {
                    count++;
                }
            }
        }
        return count;
    }
};