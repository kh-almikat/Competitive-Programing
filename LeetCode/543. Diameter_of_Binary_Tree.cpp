/*problem link: https://leetcode.com/problems/diameter-of-binary-tree/description/ */


class Solution {
public:
    int mx;
    int max_height(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        int l = max_height(root->left);
        int r = max_height(root->right);

        int diameter = l+r;
        mx = max(mx, diameter);

        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        mx = 0;
        int h = max_height(root);

        return mx;
    }
};