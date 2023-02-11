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
class Solution
{
public:
    void preorder(TreeNode *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
        {
            ans.push_back(NULL);
            return;
        }

        // cout << root-> val << " ";
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> ans1;
        vector<int> ans2;
        preorder(p, ans1);
        preorder(q, ans2);

        if (ans1 == ans2)
            return true;
        else
            return false;
    }
};