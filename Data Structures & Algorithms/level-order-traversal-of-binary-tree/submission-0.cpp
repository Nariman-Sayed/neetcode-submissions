class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> v;
        queue<TreeNode*> q;

        if (root == nullptr)
            return v;

        q.push(root);

        while (!q.empty()) {

            int len = q.size();

            vector<int> l;

            for (int i = 0; i < len; i++) {

                l.push_back(q.front()->val);

                if (q.front()->left)
                    q.push(q.front()->left);

                if (q.front()->right)
                    q.push(q.front()->right);

                q.pop();
            }

            v.push_back(l);
        }

        return v;
    }
}; 