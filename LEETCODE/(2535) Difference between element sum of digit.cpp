class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,sumdigit=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            int digit=nums[i];
             while(digit){
                 sumdigit+=digit%10;
                 digit=digit/10;
             }
        }
        return abs(sum-sumdigit);

        
    }
};
