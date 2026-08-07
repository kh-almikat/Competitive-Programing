/*problem link: https://www.naukri.com/code360/problems/diameter-of-the-binary-tree_920552?leftPanelTabValue=PROBLEM */


int mx;
    
	int max_height(TreeNode<int> *root)
    {
        if(root == NULL)
            return 0;

        int l = max_height(root->left);
        int r = max_height(root->right);

        int diameter = l+r;
        mx = max(mx, diameter);

        return max(l, r)+1;
    }
int diameterOfBinaryTree(TreeNode<int> *root){

    mx = 0;
    int h = max_height(root);

    return mx;
}
