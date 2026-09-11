class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=0, maxsum=INT_MIN;
        for(int n:nums){
            csum+=n;
            maxsum=max(csum,maxsum);
            if(csum<0){
                csum=0;
            }
        }
        return maxsum;
    }
};