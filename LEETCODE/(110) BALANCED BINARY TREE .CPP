class Solution {
public:
  unordered_map<TreeNode*,int>mp;
  int getheight(TreeNode *root){
      if(!root){
          return 0;
      }
      int n=1+max(getheight(root->left),getheight(root->right));
          return n;
      
  }
  
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int l=getheight(root->left);
        int r=getheight(root->right);
        return abs(l-r)<2 && isBalanced(root->left) && isBalanced(root->right);
    }
   
};
