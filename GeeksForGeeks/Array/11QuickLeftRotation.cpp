/*
https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1
*/

// method 1
class Solution
{

public:
    void leftRotate(int arr[], int k, int n)
    {

        vector<int> temp(n);

        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(i + k) % n];
        }

        for (int i = 0; i < n; i++)
        {

            arr[i] = temp[i];
        }
    }
};

// method 2
class Solution
{

public:
    void leftRotate(int arr[], int k, int n)
    {
        k = k % n;
        reverse(arr, arr + k);
        reverse(arr + k, arr + n);
        reverse(arr, arr + n);
    }
};