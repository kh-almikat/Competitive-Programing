/*problem link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/ */


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

    ListNode* deleteMiddle(ListNode* head) {

      int sz = size(head);
      ListNode* temp = head;
      int idx = (sz/2) ;

      if(head == NULL || head->next == NULL)
          return NULL;

      else
      {
        for(int i = 0; i < idx-1; i++)
        {
            temp = temp->next;
        } 

        temp->next = temp->next->next;
      }


      return head;
    }
};