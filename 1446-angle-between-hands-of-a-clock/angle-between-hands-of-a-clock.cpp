class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = abs(0.5 * (60 * hour - 11 * minutes));
        return ans > 180 ? 360 - ans:ans;
    }
};