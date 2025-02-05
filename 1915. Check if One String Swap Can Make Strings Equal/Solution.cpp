class Solution {  
public:  
    bool areAlmostEqual(string s1, string s2) {  
        if(s1.size() != s2.size()) {  
            return false;  
        }  
        
        int count = 0;  
        int firstDiff = -1, secondDiff = -1;  
        
        for (int i = 0; i < s1.size(); i++) {  
            if(s1[i] != s2[i]) {  
                count++;  
                if(firstDiff == -1)  
                    firstDiff = i;  
                else  
                    secondDiff = i;  
            }  
            
            if(count > 2) {  
                return false;  
            }  
        }  
        
        if(count == 0) {  
            return true;  
        }  
        
        if(count == 2 && s1[firstDiff] == s2[secondDiff] && s1[secondDiff] == s2[firstDiff]) {  
            return true;  
        }  
        
        return false;  
    }  
};