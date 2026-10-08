 class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty())
            return nullptr;

        TreeNode* root = new TreeNode(preorder[0]);

        int mid = 0;

        while (inorder[mid] != preorder[0]) {
            mid++;
        }

        vector<int> leftPreorder(preorder.begin() + 1,
                                 preorder.begin() + mid + 1);

        vector<int> rightPreorder(preorder.begin() + mid + 1,
                                  preorder.end());

        vector<int> leftInorder(inorder.begin(),
                                inorder.begin() + mid);

        vector<int> rightInorder(inorder.begin() + mid + 1,
                                 inorder.end());

        root->left = buildTree(leftPreorder, leftInorder);
        root->right = buildTree(rightPreorder, rightInorder);

        return root;
    }
};