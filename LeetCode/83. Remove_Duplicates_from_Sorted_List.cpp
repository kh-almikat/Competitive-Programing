/*problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/ */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return head;

        ListNode* temp = head;

        while(temp->next != NULL)
        {
            if(temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }
            else
                temp = temp->next;
        }

        return head;
    }
};