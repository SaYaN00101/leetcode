class Solution {
public:
    bool check(vector<int>& nums) {
        int cdrops=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                // (i + 1) % n seamlessly connects the last element back to the first element
                cdrops++;
            }
        }
        return cdrops<=1;
    }
};