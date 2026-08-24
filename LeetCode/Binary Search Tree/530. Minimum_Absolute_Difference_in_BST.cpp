/*problem link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/ */


class Solution {
public:
    vector<int> v;

    void inorder(TreeNode* root) {
        if (root == NULL)
            return;

        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        
        inorder(root);

        int mn = INT_MAX;

        for (int i = 1; i < v.size(); i++) {
            mn = min(mn, v[i] - v[i - 1]);
        }

        return mn;
    }
};