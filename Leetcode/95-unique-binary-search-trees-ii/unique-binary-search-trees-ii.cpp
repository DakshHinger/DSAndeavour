class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(n < 1) return {};
        return generateTrees(1,n);        
    }
    
    vector<TreeNode*> generateTrees(int start, int end) {
        vector<TreeNode*> ans;
        if(start > end){
            ans.push_back(NULL);
            return ans;
        }
        
        for(int i = start; i <= end; i++){
            auto leftSubtrees = generateTrees(start,i - 1);
            auto rightSubtrees = generateTrees(i + 1, end);
            for(auto left: leftSubtrees)
                for(auto right: rightSubtrees){
                    auto root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    ans.push_back(root);
                }
        }
        return ans;
    }
};