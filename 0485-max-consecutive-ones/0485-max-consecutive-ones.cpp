class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxAns = 0;
        int len = 0;

        for (int x : nums) {
            if (x == 1) {
                len++;
                maxAns = max(maxAns, len);
            } else {
                len = 0;
            }
        }

        return maxAns;
    }
};