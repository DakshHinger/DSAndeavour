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
    int dfs(TreeNode* root){
        if(root->left==NULL &&root->right==NULL){
            return 1;
        }
        int height=INT_MAX;
        if(root->left){
            height=1+dfs(root->left);
        }
        if(root->right){
            height=min(height, 1+dfs(root->right));
        }
        return height;
    }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return dfs(root);
    }
};