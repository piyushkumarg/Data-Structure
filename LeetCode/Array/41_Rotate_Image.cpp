/*
leetcode 48. Rotate Image
https://leetcode.com/problems/rotate-image/
*/

// Solution 1:
/*
Approach: Transpose of matrix
          Reverse each row
*/

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();

        // Transpose of matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        // reverse every row
        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

// Solution 2:
class Solution
{
public:
    void rotate(vector<vector<int>> &a)
    {

        int row = a.size();
        int col = a[0].size();

        for (int i = 0; i < row / 2; i++)
        {
            for (int j = i; j < col - i - 1; j++)
            {
                int temp = a[i][j];
                a[i][j] = a[col - 1 - j][i];
                a[col - 1 - j][i] = a[col - 1 - i][col - 1 - j];
                a[col - 1 - i][col - 1 - j] = a[j][col - 1 - i];
                a[j][col - 1 - i] = temp;
            }
        }
    }
};