class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mej;
        for(int n:nums){
            mej[n]++;
            if(mej[n]>nums.size()/2){
                return n;
            }
        }
        return -1;

    }
};