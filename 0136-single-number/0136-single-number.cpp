class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int n:nums){
            ans^=n;
        }
        return ans;

        // unordered_map<int,int> ct;
        // for(int n:nums){
        //     ct[n]++;
        // }
        // for(auto x:ct){
        //     if(x.second==1){
        //         return x.first;
        //     }
        // }
        // return -1;
    }
};