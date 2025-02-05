class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string alt;

        for (int i = 0; i < word1.size() || i < word2.size(); i++) {
            if (i < word1.size()) alt += word1[i];
            if (i < word2.size()) alt += word2[i];
        }

        return alt;
    }
};
