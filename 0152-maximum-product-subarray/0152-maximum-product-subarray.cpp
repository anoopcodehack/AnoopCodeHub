class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int h = 1;
        int l = 1;
        int ph = 1;
        int pl = 1;

        int m = *max_element(nums.begin(), nums.end());

        for (int i : nums) {
            h = i * ph;
            l = i * pl;

            ph = max({h, l, i});
            pl = min({h, l, i});

            if (m < ph)
                m = ph;
        }

        return m;
    }
};