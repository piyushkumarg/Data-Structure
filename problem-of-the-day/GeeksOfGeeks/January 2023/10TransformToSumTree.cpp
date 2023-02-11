class Solution
{
private:
    int solve(Node *node)
    {
        if (node == NULL)
            return 0;

        int left = solve(node->left);
        int right = solve(node->right);

        int old_data = node->data;
        int new_data = left + right;

        node->data = new_data;

        return old_data + new_data;
    }

public:
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        solve(node);
    }
};