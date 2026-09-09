class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int x : nums1) {
            int nextGreater = -1;

            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == x) {

                   
                    for (int j = i + 1; j < nums2.size(); j++) {
                        if (nums2[j] > x) {
                            nextGreater = nums2[j];
                            break;
                        }
                    }

                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};