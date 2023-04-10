/*
leetcode 876. Middle of the Linked List
https://leetcode.com/problems/middle-of-the-linked-list/
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

//solution 1: count the number of nodes and then find the middle node
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int cnt = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        int i = cnt / 2;
        while (i--)
        {
            temp = temp->next;
        }
        return temp;
    }
};


//solution 2 : fast and slow pointer
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};