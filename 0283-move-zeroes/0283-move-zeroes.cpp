class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }




        // int count=0;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         int temp=i;
        //         for(int j=i+1;j<n;j++){
        //             nums[j-1]=nums[j];
        //         }
        //         count++;
                
        //     }
        // }
        // for(int k=n-count;k<n;k++){
        //     nums[k]=0;
        // }

    }
};