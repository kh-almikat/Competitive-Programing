/*problem link: https://leetcode.com/problems/swap-nodes-in-pairs/description/  */


/*     SWAP two value    */

/*

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL)
        {
            swap(temp->val, temp->next->val);
            temp = temp->next->next;
        }

        return head;   
    }
};

*/



/*      SWAP two node     */

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = NULL;
        head = head->next;
        while(1)
        {
            first->next = second->next;
            second->next = first;

            if(prev != NULL)
                prev->next = second;

            prev = first;
            first = first->next;

            if(first == NULL)
                break;

            second = first->next;
            
            if(second == NULL)
                break;
        }
        return head;
    }
};