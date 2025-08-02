class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        string result = "";
        int n = s.length();
        int cycleLen = 2 * numRows - 2;

        for (int row = 0; row < numRows; ++row) {
            for (int j = 0; j + row < n; j += cycleLen) {
                result += s[j + row];
                if (row != 0 && row != numRows - 1 && j + cycleLen - row < n) {
                    result += s[j + cycleLen - row];
                }
            }
        }
        return result;
    }
};