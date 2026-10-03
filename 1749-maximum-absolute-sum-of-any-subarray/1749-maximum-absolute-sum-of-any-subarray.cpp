class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curMax = 0, maxSum = 0;
        int curMin = 0, minSum = 0;

        for (int num : nums) {
            curMax = max(num, curMax + num);
            maxSum = max(maxSum, curMax);

            curMin = min(num, curMin + num);
            minSum = min(minSum, curMin);
        }

        return max(maxSum, -minSum);
    }
};