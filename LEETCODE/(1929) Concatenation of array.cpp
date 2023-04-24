class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        return vec;
    }
   
};
