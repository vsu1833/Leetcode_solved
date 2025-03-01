class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> char_counts;
            for (char ch :magazine) {
        char_counts[ch]++;
        }
             for (char ch : ransomNote) {
            if (char_counts[ch] == 0) {
             return false; 
            }
        char_counts[ch]--;
        }
        
        return true;
    }
};