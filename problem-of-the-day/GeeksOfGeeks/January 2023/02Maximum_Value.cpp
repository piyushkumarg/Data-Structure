class Solution
{
public:
    void solve(Node *node, int i, vector<int> &ans)
    {
        if (node == NULL)
            return;

        if (ans.size() <= i)
        {
            ans.push_back(node->data);
        }

        ans[i] = max(ans[i], node->data);

        solve(node->left, i + 1, ans);
        solve(node->right, i + 1, ans);
        return;
    }

    vector<int> maximumValue(Node *node)
    {
        vector<int> ans;
        solve(node, 0, ans);
        return ans;
    }
};