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
    bool checkbst(TreeNode* root, long long l, long long r){
        if(!root) return true;
        if(root->val>=r || root->val<=l) return false;
        return checkbst(root->right,root->val,r) && checkbst(root->left,l,root->val);
    }
public:
    bool isValidBST(TreeNode* root) {
        return checkbst(root,LLONG_MIN,LLONG_MAX);
    }
};