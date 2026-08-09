class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxAns = 0;
        int current_count = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 1) {
                current_count++;
                maxAns = max(maxAns, current_count);
            } else {
                current_count = 0;
            }
        }

        return maxAns;
    }
};