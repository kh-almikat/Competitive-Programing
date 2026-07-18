/*problem link: https://leetcode.com/problems/linked-list-cycle/description/ */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
      ListNode* slow = head;
      ListNode* fast = head;

      bool flag = false;

      while(fast != NULL && fast->next != NULL)
      {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow)
        {
            flag = true;
            break;
        }
      }

      if(flag)
        return true;
      else
        return false;  
    }
};