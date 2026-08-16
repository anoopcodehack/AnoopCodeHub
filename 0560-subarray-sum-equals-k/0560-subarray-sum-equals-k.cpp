class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int c=0;
       int n=nums.size();
       for(int l=0;l<n;l++){
        int sum=0;
        for(int r=l;r<n;r++){
            sum+=nums[r];
            if(sum==k){
                c++;
            }
        }
       }
       return c;
    }
};