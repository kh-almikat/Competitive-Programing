/*problem link: https://leetcode.com/problems/middle-of-the-linked-list/ */

class Solution {
public:

    int size(ListNode* head)
    {
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {
        
        int sz = size(head);

        ListNode* temp = head;

        for(int i = 0; i < sz/2; i++)
        {
            temp = temp->next;
        }

        return temp;
    }
};