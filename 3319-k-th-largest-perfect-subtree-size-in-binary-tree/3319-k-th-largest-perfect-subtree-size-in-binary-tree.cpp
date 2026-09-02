/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

vector<int>ans;

   int dfs(TreeNode* root){

    if(root==NULL){
            return 0;
        }

    
        int left=dfs(root->left);
        int right=dfs(root->right);
        

        if(left==-1||right==-1 || left!=right)
        return -1;

        if(left==right){
            int total= 1+2*left;
            ans.push_back(total);
            return total;
        }
        return -1;
   }


    int kthLargestPerfectSubtree(TreeNode* root, int k) {
       
        dfs(root);
        
        if(ans.size()<k){
            return -1;
        }
        sort(ans.begin(),ans.end(),greater<int>());
        return ans[k-1];
    }
};