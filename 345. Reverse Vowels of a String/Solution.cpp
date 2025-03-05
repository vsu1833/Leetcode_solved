class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            bool isVowelI = (s[i] == 'a'||s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U');
            bool isVowelJ = (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
                           s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U');
            if (isVowelI && isVowelJ) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (isVowelI) {
                j--;
            }
            else {
                i++;
            }
        }
        return s;
    }
};