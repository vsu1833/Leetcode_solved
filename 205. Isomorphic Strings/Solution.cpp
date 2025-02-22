class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        map<char, char> maps, mapt;
        for (int i = 0; i < s.size(); i++) {
            char charAts = s[i];
            char charAtt = t[i];

            if (maps.find(charAts) == maps.end()){
                maps[charAts] = charAtt;

            } else {

                if (maps[charAts] != charAtt) {
                    return false;
                }
            }
             if (mapt.find(charAtt) == mapt.end()) {
                mapt[charAtt] = charAts;

            } else {

                if (mapt[charAtt] != charAts) {
                    return false;
                }
            }
        }
        return true;
    }
};