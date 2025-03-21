class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int max_altitude = 0;
    int current_altitude = 0;
    
    for(int altitude_gain : gain) {
        current_altitude += altitude_gain;
        max_altitude = max(max_altitude, current_altitude);
    }
    
    return max_altitude;
}
};