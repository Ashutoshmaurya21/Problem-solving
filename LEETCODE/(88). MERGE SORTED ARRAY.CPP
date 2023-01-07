class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int>c;
       
            while(i<m){
                c.push_back(nums1[i]);
                i++;
            }
            while(j<n){
                c.push_back(nums2[j]);
                j++;
            }
            sort(c.begin(),c.end());
            nums1=c;
        }
};

