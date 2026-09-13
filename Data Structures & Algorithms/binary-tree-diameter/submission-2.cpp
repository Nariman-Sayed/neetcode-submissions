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
 int done(TreeNode* root, int &ans ){
    if(!root) return 0;
    int maxLeft = done(root->left,ans);
    int maxRight = done(root->right,ans);

    ans = max(ans,maxLeft+maxRight);
    return max(maxLeft,maxRight)+1;
 }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        done(root,ans);
        return ans;
    }
};
