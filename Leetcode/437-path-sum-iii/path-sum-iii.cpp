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
    void find(TreeNode* root, long long sum, int& total, int target, map<long long,long long> mp){
        if(root == NULL) return;
        sum += root->val;
        if(sum==target) total += 1;
        if(mp.find(sum - target) != mp.end()) total += mp[sum - target]; 
            mp[sum] += 1;
        find(root->left,sum,total,target,mp);
        find(root->right,sum,total,target,mp);
    }
    int pathSum(TreeNode* root, int targetSum) {
        map<long long,long long>mp;
        // mp[0] = 1;
        int total = 0;
        find(root,0,total,targetSum,mp);
        return total;
    }
};