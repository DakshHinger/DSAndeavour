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
    TreeNode* makeBST(vector<int>a, int s, int e){
        if(s>e)return NULL;
        int m=s+(e-s)/2;
        TreeNode*root=new TreeNode(a[m]);
        root->left=makeBST(a,s,m-1);
        root->right=makeBST(a,m+1,e);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& a) {
        int n=a.size();
        return makeBST(a,0,n-1);
    }
};