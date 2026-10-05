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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
        return{};

        queue<TreeNode*> q;
        vector<int> res;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            TreeNode *rightmostnode;

            while(size--){
                rightmostnode = q.front();
                if(rightmostnode->left)
                q.push(rightmostnode->left);
                if(rightmostnode->right)
                q.push(rightmostnode->right);

                q.pop();
            }
            res.push_back(rightmostnode->val);
        }
        return res;
    }
};
