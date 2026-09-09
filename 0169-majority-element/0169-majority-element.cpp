class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int major = 0;
        for(int n:nums){
            if(count==0){
                major=n;
            }
            count += (n==major)? 1:-1;
        }
        return major;


    }
};