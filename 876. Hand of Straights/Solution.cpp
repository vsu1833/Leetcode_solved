class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int size = hand.size();
        if (size % groupSize != 0) return false;

        map<int, int> mpp;
        for (int card : hand) {
            mpp[card]++;
        }

        while (!mpp.empty()) {
            int first = mpp.begin()->first;
            for (int i = 0; i < groupSize; i++) {
                int current = first + i;
                if (mpp[current] == 0) return false;
                mpp[current]--;
                if (mpp[current] == 0) mpp.erase(current);
            }
        }

        return true;
    }
};
