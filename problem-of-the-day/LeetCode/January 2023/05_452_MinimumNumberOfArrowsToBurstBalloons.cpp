class Solution
{
public:
    // staic function to sort points
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>> &points)
    {
        // sort the points from 1st index i.e points[1]
        sort(points.begin(), points.end(), comp);

        int arrow = 1;
        int last = points[0][1];
        for (int i = 1; i < points.size(); i++)
        {
            if (last < points[i][0])
            {
                arrow++;
                last = points[i][1];
            }
        }
        return arrow;
    }
};
