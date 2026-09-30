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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* current = root;
        TreeNode* newNode = new TreeNode(val);
        if (root == nullptr)
        return newNode;

        while(true){
            if(val < current->val){
                if(!current->left){
                    current->left = newNode;
                    return root;
                }
                current = current->left;

            }else{
                if(!current->right){
                    current->right = newNode;
                    return root;
                }
                current = current->right;
            }
        }
    }
};