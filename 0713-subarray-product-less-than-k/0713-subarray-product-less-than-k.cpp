class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int p=1;
            for(int j=i;j>=0;j--){
                p*=nums[j];
            
            if(p<k){
                c++;
            }else{
                break;
            }
            }
        }
        return c;
    }
};