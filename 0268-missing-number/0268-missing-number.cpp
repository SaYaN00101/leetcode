class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=n;
        for(int i=0;i<n;i++){
            ans^=i;
            ans^=nums[i];

        }
        return ans;

        // int n = nums.size();

        // for (int i = 0; i <= n; i++) {
        //     bool found = false;

        //     for (int num : nums) {
        //         if (num == i) {
        //             found = true;
        //             break;
        //         }
        //     }

        //     if (!found) {
        //     return i;
        //     }
        // }

        // return -1;
    }
};