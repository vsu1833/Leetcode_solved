class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxi = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                count += 1; 
                maxi = max(count,maxi); 

            } if (s[i] == ')')
                count -= 1;  
            
              
        }
        return maxi;
    }
};