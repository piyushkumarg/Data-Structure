/*
leetcode 88. Merge Sorted Array
https://leetcode.com/problems/merge-sorted-array/
*/

// Solution 1:
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> temp;
        for (int i = 0; i < m; i++)
        {
            temp.push_back(nums1[i]);
        }

        for (int i = 0; i < n; i++)
        {
            temp.push_back(nums2[i]);
        }
        nums1 = temp;
        sort(nums1.begin(), nums1.end());
    }
};

/********** Solution 2 ************/
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

/*************  Solution 3 *************/
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};