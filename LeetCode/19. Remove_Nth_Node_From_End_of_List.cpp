/*problem link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/ */


class Solution {
public:

    int size(ListNode* head)
    {
        int count = 0;
        ListNode* temp = head;

        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int sz = size(head);
        int idx = sz - n;
        ListNode* temp = head;

        if(idx == 0)
        {
            return head = head->next;
        }
        else
        {
            for(int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;

            return head;
        }
    }
};