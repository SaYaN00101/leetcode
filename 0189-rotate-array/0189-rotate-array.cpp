class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
        
        // Handle edge case where k is larger than the array size
        k = k % n; 
        
        // Create a temporary vector to store the rotated result
        vector<int> temp(n);
        
        // Place each element directly into its new position
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        
        // Copy the results back into the original nums vector
        nums = temp;
    }
};