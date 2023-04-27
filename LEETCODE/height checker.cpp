class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>vec;
        vec=heights;
        sort(vec.begin(),vec.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=vec[i]){
                count++;
            }

            
            
        }
        return count;


        
    }
};
