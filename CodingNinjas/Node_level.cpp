/*problem link: https://www.naukri.com/code360/problems/node-level_920383?leftPanelTabValue=PROBLEM */


#include <bits/stdc++.h>

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*, int>> q;

    if(root)
        q.push({root, 1});

    while(!q.empty())
    {
        pair<TreeNode<int>*, int> f = q.front();
        q.pop();

        TreeNode<int>* node = f.first;
        int level = f.second;

        if(node->val == searchedValue)
            return level;

        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
    }
}
