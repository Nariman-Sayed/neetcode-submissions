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
TreeNode *Root(TreeNode *root, vector<int> &ans){
            if(!root)
            return NULL;
            Root(root->left,ans);
            ans.push_back(root->val);
            Root(root->right,ans);
            return NULL;
        }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        Root(root,ans);
        return ans;
    }
};