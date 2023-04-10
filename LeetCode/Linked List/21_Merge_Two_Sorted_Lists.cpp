/*
leetcode 21. Merge Two Sorted Lists
https://leetcode.com/problems/merge-two-sorted-lists/
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// solution 1: Recursion
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        if (list1->val <= list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

// solution 2: Iteration
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;

        if (list2 == NULL)
            return list1;

        if (list1->val > list2->val)
            swap(list1, list2);

        // act as head of resultant merged list
        ListNode *res = list1;
        while (list1 != NULL && list2 != NULL)
        {
            ListNode *temp = NULL;
            while (list1 != NULL && list1->val <= list2->val)
            {
                temp = list1; // storing last sorted node
                list1 = list1->next;
            }

            // link previous sorted node with next larger node in list2
            temp->next = list2;
            swap(list1, list2);
        }
        return res;
    }
};