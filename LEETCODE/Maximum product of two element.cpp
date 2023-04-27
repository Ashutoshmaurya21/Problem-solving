class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=nums.size();
        return (nums[t-1]-1)*(nums[t-2]-1);
      
        
    }
};
