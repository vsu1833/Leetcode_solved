class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ;
        for(int i = s.size()-1 ; i >= 0 ; i--)
        {
            if(s[i]==' ')
            {
               if(count>0)
               {
                break;
               }
            }
            if(s[i]!=' ')
            {
                count=count+1;
            }
        }
        return count;
}
};