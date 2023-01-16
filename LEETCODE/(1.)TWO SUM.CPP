class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int first=0;
        int second=0;
        int r=nums.size();
        for(int i=0;i<r-1;i++)
    {
            for(int j=i+1;j<r;j++)
         {
           if(nums[i]+nums[j]==target)
           {
               first=i;
               second=j;
            } 
        }
    }
        return{first,second};
    }
   
};
